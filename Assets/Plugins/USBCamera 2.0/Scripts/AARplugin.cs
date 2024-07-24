using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
#if PLATFORM_ANDROID
using UnityEngine.Android;
#endif

namespace ChaosIkaros
{
    public class CameraDebug
    {
        public static bool enableDebug = false;
        public static void Log(string info)
        {
            if(enableDebug)
                Debug.Log(info);
        }
    }
    public class AARplugin : MonoBehaviour
    {
        public enum FrameTransferMode
        {
            //
            // Summary:
            //     Use GPU(OpenGL) to convert frame (recommended mode)
            GPU_Mode = 0,
            //
            // Summary:
            //     Use GPU and CPU to convert frame (not as efficient as GPU_Mode, do not use this mode unless you failed to launch GPU_Mode )
            Heterogeneous_Mode = 1,
        }
        public const int FRAME_FORMAT_DEFAULT = 1;
        public const int FRAME_FORMAT_YUYV = 0;
        public const int FRAME_FORMAT_MJPEG_YUYV = 1;
        public const int FRAME_FORMAT_ANY_RGB = 2;
        public const int FRAME_FORMAT_ANY_BGR = 3;
        public const int FRAME_FORMAT_ANY_RGB565 = 4;
        public const int FRAME_FORMAT_ANY_RGBX = 5;
        public const int FRAME_FORMAT_ANY_YUV420SP = 6;
        public const int FRAME_FORMAT_ANY_IYUV420SP = 7;
        public const int FRAME_FORMAT_ANY_YUYV = 8;
        public FrameTransferMode frameTransferMode = FrameTransferMode.GPU_Mode;
        public int CameraInitializationTime = 2000;//milli seconds
        public USBCamera[] cameraScreens = new USBCamera[4];
        public bool enableSpecificUSBDevices = false;
        public string[] specificUSBDevices = new string[4] { "usb/001/003", "none", "none", "none"};
        public bool enableSpecificUSBDevicesByProductName = false;
        public string[] specificProductNames = new string[4] { "ProductX", "none", "none", "none" };
        public Texture2D[] rawTextures = new Texture2D[4];
        public List<string> allUSBDevice = new List<string>();
        /// <summary>
        /// custom texture showed when the plugin failed to get camera image
        /// </summary>
        public Texture2D blackScreen;
        /// <summary>
        /// receive feedback from plugin
        /// </summary>
        public Text messageText;

        /// <summary>
        /// android object
        /// </summary>
        public AndroidJavaObject androidJavaObject;

        /// <summary>
        /// In Promiscuous mode, the plugin will recognize all USB devices as a USB camera. Do not enable this mode unless you failed to connect to your camera.
        /// </summary>
        public bool PromiscuousModeOn = false;
        public bool screenNeverSleep = false;
        public bool enableDebug = false;
        public bool enableNativeToast = false;
        public bool isConnecting = false;
        void Start()
        {
            CameraDebug.enableDebug = enableDebug;
            if(screenNeverSleep)
                Screen.sleepTimeout = SleepTimeout.NeverSleep;
#if UNITY_EDITOR && UNITY_ANDROID
            CameraDebug.Log("Please switch the platform to standalone if you want to preview on the Editor");
#endif
#if UNITY_ANDROID && !UNITY_EDITOR
            InitPlugin();
#endif
        }

        /// <summary>
        /// initialize camera format and USBCamera Manager
        /// </summary>
        public void InitPlugin()
        {
            UVCManager.InitUVCManager();
            androidJavaObject = UVCManager.androidJavaObject;
            androidJavaObject.Call<bool>("SetUnityHolderName",gameObject.name);
#if PLATFORM_ANDROID
            if (androidJavaObject.Call<int>("GetAPILevel") >= 28 && !Permission.HasUserAuthorizedPermission(Permission.Camera))
            {
                Debug.Log("Requesting Android Permission");
                Permission.RequestUserPermission(Permission.Camera);
            }
#endif
            SetCameraInitializationTime(CameraInitializationTime);
            androidJavaObject.Call<bool>("SetToast", enableNativeToast);
            if (PromiscuousModeOn)
            {
                CameraDebug.Log("Enable Promiscuous Mode");
                SetPromiscuousMode(true);
            }
            OnBtnClick();
            //Unsupported resolution will cause error
            int connectedCameras = 0;
            for (int i = 0; i < cameraScreens.Length; i++)
            {
                if (cameraScreens[i] != null)
                {
                    connectedCameras++;
                    CameraDebug.Log("Create camera foramt " + i.ToString() + " : " + CreateUSBCameraFormat(
                    i, FRAME_FORMAT_DEFAULT,
                    cameraScreens[i].width, cameraScreens[i].height,
                    1, cameraScreens[i].FPS,
                    (float)1 / cameraScreens.Length));
                }
            }
            CameraDebug.Log("Max cameras: " + androidJavaObject.Call<int>("SetMaxDeviceCount", connectedCameras));
            //CameraDebug.Log("Create USBCamera Manager: " + CreateUSBCameraManagerWithSpecificDevices("usb/001/003", "usb/001/004"));
            if (enableSpecificUSBDevices && !enableSpecificUSBDevicesByProductName)
                CameraDebug.Log("Create USBCamera Manager: " + CreateUSBCameraManagerWithSpecificDevices(
                    specificUSBDevices[0], specificUSBDevices[1],specificUSBDevices[2],specificUSBDevices[3]));
            else if(enableSpecificUSBDevices && enableSpecificUSBDevicesByProductName)
                CameraDebug.Log("Create USBCamera Manager: " + CreateUSBCameraManagerWithSpecificDevicesByProductName(
                    specificProductNames[0], specificProductNames[1], specificProductNames[2], specificProductNames[3]));
            else
                CameraDebug.Log("Create USBCamera Manager: " + CreateUSBCameraManagerWithRandomDevices());
            for (int i = 0; i < cameraScreens.Length; i++)
            {
                if (cameraScreens[i] != null)
                {
                    cameraScreens[i].InitSupportedFormat();
                    cameraScreens[i].InitScreen();
                }
            }
        }

        /// <summary>
        /// In Promiscuous mode, the plugin will recognize all USB devices as a USB camera. Do not enable this mode unless you failed to connect to your camera.
        /// </summary>
        public bool SetPromiscuousMode(bool input)
        {
            return androidJavaObject.Call<bool>("SetPromiscuousMode", input);
        }

        /// <summary>
        /// Set the Camera Initialization Time in milli seconds
        /// </summary>
        public int SetCameraInitializationTime(int input)
        {
            return androidJavaObject.Call<int>("SetCameraInitializationTime", input);
        }

        /// <summary>
        /// create USB Camera Format with specific id (0-3) frameFormat(0-1) bandwidthFactor (float 0-1)
        /// </summary>
        public bool CreateUSBCameraFormat(int deviceID, int i_frameFormat = FRAME_FORMAT_DEFAULT, int i_width = 640,
            int i_height = 480, int i_minFPS = 1, int i_maxFPS = 30, float i_bandwidthFactor = 1.0f)
        {
            return androidJavaObject.Call<bool>("CreateFormat", deviceID, i_frameFormat, i_width,
                i_height, i_minFPS, i_maxFPS, i_bandwidthFactor);
        }

        /// <summary>
        /// create USB Camera Manager with specific device names
        /// multiple cameras is not recommended for Android device with USB2.0 (due to the limit of transimision bandwidth)
        /// </summary>
        public bool CreateUSBCameraManagerWithSpecificDevices(string deviceName1, string deviceName2 = "none",
            string deviceName3 = "none", string deviceName4 = "none")
        {
            return androidJavaObject.Call<bool>("CreateUSBCamera", deviceName1, deviceName2, deviceName3, deviceName4, true, false);
        }

        /// <summary>
        /// create USB Camera Manager with specific product names
        /// multiple cameras is not recommended for Android device with USB2.0 (due to the limit of transimision bandwidth)
        /// </summary>
        public bool CreateUSBCameraManagerWithSpecificDevicesByProductName(string deviceName1, string deviceName2 = "none",
            string deviceName3 = "none", string deviceName4 = "none")
        {
            return androidJavaObject.Call<bool>("CreateUSBCamera", deviceName1, deviceName2, deviceName3, deviceName4, true, true);
        }

        /// <summary>
        /// create USB Camera Manager with random devices
        /// multiple cameras is not recommended for Android device with USB2.0 (due to the limit of transimision bandwidth)
        /// </summary>
        public bool CreateUSBCameraManagerWithRandomDevices(string deviceName1 = "usb/001/002", string deviceName2 = "usb/001/004",
            string deviceName3 = "usb/003/005", string deviceName4 = "usb/003/006")
        {
            return androidJavaObject.Call<bool>("CreateUSBCamera", deviceName1, deviceName2, deviceName3, deviceName4, false, false);
        }

        /// <summary>
        /// get the Texture2D of camera frame with specific device ID
        /// </summary>
        public Texture2D GetFrame(int deviceID)
        {
            isConnecting = false;
            if (androidJavaObject.Call<bool>("getCameraState", 0, deviceID) && cameraScreens[deviceID].previewing)
            {
                int textureId = 0;
                if (frameTransferMode == FrameTransferMode.GPU_Mode)
                    textureId = androidJavaObject.Call<int>("getTextureID", deviceID);
                else
                    textureId = androidJavaObject.Call<int>("getTextureIDByRS", deviceID);
                if (textureId != 0)
                {
                    isConnecting = true;
                    CameraDebug.Log("create external texture");
                    if (rawTextures[deviceID] == null || rawTextures[deviceID].width != cameraScreens[deviceID].width ||
                        rawTextures[deviceID].height != cameraScreens[deviceID].height)
                    {
                        rawTextures[deviceID] = null;
                        rawTextures[deviceID] = Texture2D.CreateExternalTexture(cameraScreens[deviceID].width,
                            cameraScreens[deviceID].height, TextureFormat.RGB565, false, false, (IntPtr)textureId);
                        rawTextures[deviceID].wrapMode = TextureWrapMode.Clamp;
                        rawTextures[deviceID].filterMode = FilterMode.Bilinear;
                    }
                    else
                    {
                        rawTextures[deviceID].UpdateExternalTexture((IntPtr)textureId);
                    }
                }
                return rawTextures[deviceID];
            }
            else
            {
                if (blackScreen == null || blackScreen.width != cameraScreens[deviceID].width || 
                    blackScreen.height != cameraScreens[deviceID].height)
                {
                    blackScreen = null;
                    blackScreen = new Texture2D(cameraScreens[deviceID].width,
                        cameraScreens[deviceID].height, TextureFormat.RGB565, false, false);
                    for (int y = 0; y < blackScreen.height; y++)
                    {
                        for (int x = 0; x < blackScreen.width; x++)
                            blackScreen.SetPixel(x, y, Color.black);
                    }
                    blackScreen.wrapMode = TextureWrapMode.Clamp;
                    blackScreen.filterMode = FilterMode.Bilinear;
                    blackScreen.Apply();
                }
                return blackScreen;
            }
        }

        /// <summary>
        /// refresh camera states with specific device ID
        /// </summary>
        public void RefreshCameraStates(int deviceID)
        {
            if(androidJavaObject != null)
                cameraScreens[deviceID].playing = androidJavaObject.Call<bool>("getCameraState", 0, deviceID);
        }

        /// <summary>
        /// test API in Android aar
        /// </summary>
        public void OnBtnClick()
        {
            if (androidJavaObject == null)
                return;
            //call function in Android aar
            bool success = androidJavaObject.Call<bool>("SendMessageToUnity", "Echo test for plugin");
            if (true == success)
            {
                CameraDebug.Log("Success");
            }
        }

        /// <summary>
        /// receive msg from Android aar
        /// </summary>
        /// <param name="content"></param>
        public void FromAndroid(string content)
        {
            messageText.text = content;
            if (content.StartsWith("camera: ==;"))
            {
                int tempID = int.Parse(content.Split(';')[1]);
                cameraScreens[tempID].deviceName = content.Split(';')[2];
            }
            if (content.StartsWith("Device list update:"))
            {
                allUSBDevice.Clear();
                string [] rawDeviceList =  content.Split(':')[2].Split(';');
                for (int i = 0; i < rawDeviceList.Length; i++)
                {
                    if (rawDeviceList[i] != "")
                    {
                        allUSBDevice.Add(rawDeviceList[i]);
                    }
                }
                for (int i = 0; i < cameraScreens.Length; i++)
                {
                    if (cameraScreens[i] != null && cameraScreens[i].enableUSBDeviceSwitch)
                    {
                        cameraScreens[i].UpdateDeviceList();
                    }
                }
            }
            if (content.StartsWith("SupportedSizeList;"))
            {
                int tempID = int.Parse(content.Split(';')[1]);
                cameraScreens[tempID].InitSupportedSizes(content);
            }
            CameraDebug.Log("From Android: " + content);
        }

        // Update is called once per frame
        void Update()
        {

        }
    }

}