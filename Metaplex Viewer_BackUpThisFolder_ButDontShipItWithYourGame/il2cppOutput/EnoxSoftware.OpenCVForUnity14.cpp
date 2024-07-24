#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t53AF86BBB805E94F10CAA9B43984EA7E6D7802E2;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E;
// System.Collections.Generic.SortedDictionary`2<System.String,System.String>
struct SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct TreeSet_1_tDA45F3E533BFF5C5B658B65637864286B43BA688;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t85701C476E14C33298DBCC71B6EDB93924F2AD33;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// OpenCVForUnityExample.OpenCVForUnityExample
struct OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// OpenCVForUnityExample.ShowLicense
struct ShowLicense_tA5B3F0CB939DB49A020CE248B7A64A51887CB727;
// OpenCVForUnityExample.ShowSystemInfo
struct ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// OpenCVForUnityExample.TouchController
struct TouchController_t6C6DDA6C14D5105DBA9BF05C5FED55E7F52D78BF;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;

IL2CPP_EXTERN_C RuntimeClass* Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0672FEB0E0793942C267D369AA4DA660CF55B508;
IL2CPP_EXTERN_C String_t* _stringLiteral072A0585E92FAF63F3E8C55231DD1FDE969E80DB;
IL2CPP_EXTERN_C String_t* _stringLiteral0840A6BAC6FF53489BE3E3D934FA500B9505F2BE;
IL2CPP_EXTERN_C String_t* _stringLiteral08C8850C5D220FA359EC8C564710DEA73AC8F7FC;
IL2CPP_EXTERN_C String_t* _stringLiteral09017626BA82971740BD4291CF45772A86B3E5EF;
IL2CPP_EXTERN_C String_t* _stringLiteral094659F39773A731C5485FCEDF75E3491D8D2364;
IL2CPP_EXTERN_C String_t* _stringLiteral0C069334B215D38C5D14462DC7F845470ABDFE91;
IL2CPP_EXTERN_C String_t* _stringLiteral0FC03026892B069CF29F6496390458CA5BB0E267;
IL2CPP_EXTERN_C String_t* _stringLiteral1293C919D0E59DF6C592CE515E0411AB1997A9BF;
IL2CPP_EXTERN_C String_t* _stringLiteral13575BE347F5D83A4764ED52D428C145955FE1AF;
IL2CPP_EXTERN_C String_t* _stringLiteral149D5C668B434AB65CAEAC22E8715CD541290062;
IL2CPP_EXTERN_C String_t* _stringLiteral17C2A502698E08BF777AFDFA2E7751B0CF582E43;
IL2CPP_EXTERN_C String_t* _stringLiteral1A3F1182F32E60381624B2C12C4E4AD6C9673B3A;
IL2CPP_EXTERN_C String_t* _stringLiteral1AD337D710BC550EF7837EA38D86151E27059508;
IL2CPP_EXTERN_C String_t* _stringLiteral1AEB6C5C4D4F03F2A8AD503F20B7CDF5F0C09EF5;
IL2CPP_EXTERN_C String_t* _stringLiteral1BE0C450502BF871D80DD013F3C43186E8E1EE6D;
IL2CPP_EXTERN_C String_t* _stringLiteral2041EDE270259638082CD06E6F357797DF047796;
IL2CPP_EXTERN_C String_t* _stringLiteral21971A82307FF5ADB6C85B9C9D473686FE1A5FB5;
IL2CPP_EXTERN_C String_t* _stringLiteral22E792B9CD997482AF09A5F885E80B6FA787D1D4;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral25FCFBD128DE861A3BD0518FA355C68762F3D3A0;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral2BA0F833654DC30347600B912B5AF4E45E9ABC7D;
IL2CPP_EXTERN_C String_t* _stringLiteral2DAF6CBEE5F0A03707E4B684673E3AFC7B9F8F43;
IL2CPP_EXTERN_C String_t* _stringLiteral32A8C1CA1ED7F5AE9E2B45E38D76C2F0E86A72D7;
IL2CPP_EXTERN_C String_t* _stringLiteral32C002D38A1807996C6868372F388126936920CD;
IL2CPP_EXTERN_C String_t* _stringLiteral36BCE8811BC07D9F28B58F57CDE3DA2A30E8D4E2;
IL2CPP_EXTERN_C String_t* _stringLiteral37D7BF99452E25F6529DFDD60BD37A96D3B12DD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3D4286118AF9BDDD44A66073F07461FFC886C720;
IL2CPP_EXTERN_C String_t* _stringLiteral3F7E2635D4BDA89B2937C0D314C4A923F1A516D3;
IL2CPP_EXTERN_C String_t* _stringLiteral444FA374A2E6AF9D62250B109B505743F5D3D772;
IL2CPP_EXTERN_C String_t* _stringLiteral47EB513E374108E26037B7F9B4BF7E16901170BD;
IL2CPP_EXTERN_C String_t* _stringLiteral4C4CF5F8BFCB023E20DF346B8A8640587FCF727E;
IL2CPP_EXTERN_C String_t* _stringLiteral4CEA2A9D9E1B5693EE770EE031EFCE8F11914430;
IL2CPP_EXTERN_C String_t* _stringLiteral4DA136303E988354D83DDB0DF630BA2E0C0293DB;
IL2CPP_EXTERN_C String_t* _stringLiteral4F996BDAC4E6B7826DAACE5CEB553A53AD238DDB;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF0415543A28302256E4687FCDDCCED98AB2671;
IL2CPP_EXTERN_C String_t* _stringLiteral5546C2411A2F434B00395A5DAEB67C301060371C;
IL2CPP_EXTERN_C String_t* _stringLiteral565962078D5F2D539D0129C5ED9E85D1098F3767;
IL2CPP_EXTERN_C String_t* _stringLiteral56F18BAC2D0680F54E3281D9DD3EAE0F1828FE34;
IL2CPP_EXTERN_C String_t* _stringLiteral5C633C699354EB2F41C5E42593AA9A86A71CB9A6;
IL2CPP_EXTERN_C String_t* _stringLiteral5E322DD28AD99228582F1D23A519A7F60828597F;
IL2CPP_EXTERN_C String_t* _stringLiteral5E6789DC3EC8740BAC44B3B398D83CF5E95C0978;
IL2CPP_EXTERN_C String_t* _stringLiteral5EB344AB367F448EA2286188D14F1E57AFE2A600;
IL2CPP_EXTERN_C String_t* _stringLiteral645B63743A30F42FC01E57216637071F9E612C18;
IL2CPP_EXTERN_C String_t* _stringLiteral65225412436BF0678B706A62576A064A4C32C80A;
IL2CPP_EXTERN_C String_t* _stringLiteral661903FE1C819985669687CEA92E628CA1C8F025;
IL2CPP_EXTERN_C String_t* _stringLiteral67128AFD62D3C9F64060A3E7808E4257E2ABA774;
IL2CPP_EXTERN_C String_t* _stringLiteral68C5EBDA07B90F3EF90FC7FB728592CAAC4DAD86;
IL2CPP_EXTERN_C String_t* _stringLiteral68D7874A8AC392EFF634A30E9CC049D57055D805;
IL2CPP_EXTERN_C String_t* _stringLiteral6BF6E55472A7AEBE49130ABFF81E42D240BF6E49;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2C56060B3F7353031AD314517C27945CC39748;
IL2CPP_EXTERN_C String_t* _stringLiteral6EE2040F867CE87E19FD4C8B827680C3087771F5;
IL2CPP_EXTERN_C String_t* _stringLiteral71B42CAC608DA1510F14C18AC5781683FA93BB0D;
IL2CPP_EXTERN_C String_t* _stringLiteral728CAD7803E88C6170EB59F695FCDDB7E137A171;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral77843243D4312B40A1163EFE55D56961E2352D09;
IL2CPP_EXTERN_C String_t* _stringLiteral7C4A02C40C59D535D9330D03BEFF0FD779FE69AD;
IL2CPP_EXTERN_C String_t* _stringLiteral8202A9BDBBB66F29F15E888F0974BC65A20DFEF5;
IL2CPP_EXTERN_C String_t* _stringLiteral82DB4BBA502FD93811667E93017AA8405CD25EC2;
IL2CPP_EXTERN_C String_t* _stringLiteral833740EF14718A92FF7D10F097166FC6CF61B1F7;
IL2CPP_EXTERN_C String_t* _stringLiteral86AE0426EFB6B456C9C8F1BBB8F71CBA68C8859A;
IL2CPP_EXTERN_C String_t* _stringLiteral879786CC55E8F64298B89F9D4F64928DF47182A8;
IL2CPP_EXTERN_C String_t* _stringLiteral88B3B45354638BB1D088C2F594255428143E253F;
IL2CPP_EXTERN_C String_t* _stringLiteral88B577CD70324891DD50A63CB766A17F598143BF;
IL2CPP_EXTERN_C String_t* _stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB3FB8B94B0BF97B1CDE3F5FC889865A102B42C;
IL2CPP_EXTERN_C String_t* _stringLiteral8D6D2A3913299C75E9A370FFC1B3847B308C903C;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral92F6039A469369558AA50CA78FAA716C83E098E2;
IL2CPP_EXTERN_C String_t* _stringLiteral932DAA7806FCCE8AB5DFDBBE20BE689CD2E12A33;
IL2CPP_EXTERN_C String_t* _stringLiteral93DCCD0660AFE4E2495D6480BCD28D33391D3666;
IL2CPP_EXTERN_C String_t* _stringLiteral97A88737F466C93B8A719214AD2797BA97B41B5B;
IL2CPP_EXTERN_C String_t* _stringLiteral97EA77AC83F98D00ABACEABF5C90321984E6C48D;
IL2CPP_EXTERN_C String_t* _stringLiteral9A02A2F3B2188034751454838D52A0FA5791DED8;
IL2CPP_EXTERN_C String_t* _stringLiteral9D59BCDBD882BB533047E0371B39D3AE556BF6E2;
IL2CPP_EXTERN_C String_t* _stringLiteralA1DB32457DB8CC2B803A300F8AB4C55F4E64A706;
IL2CPP_EXTERN_C String_t* _stringLiteralA5A170FA066ABC33F11623F468C6A54804FD596E;
IL2CPP_EXTERN_C String_t* _stringLiteralA6C20B080039A5CBB2676147D91B2DF899F6B587;
IL2CPP_EXTERN_C String_t* _stringLiteralA801A527E639BE9A44DDCC5BC097490788A08259;
IL2CPP_EXTERN_C String_t* _stringLiteralA95898025CC11DF26437FBBC4B43CA5F697F5DB1;
IL2CPP_EXTERN_C String_t* _stringLiteralADDE63313DA96A211D646BBAF4A547C4B393A27B;
IL2CPP_EXTERN_C String_t* _stringLiteralB2113A207765BA2D8ABB7F50B4388B872AC1E2D2;
IL2CPP_EXTERN_C String_t* _stringLiteralB29863D97935F87245759F48D47366B206A87A11;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C7CF27280F63AF399C252410D68B6C8877F0B6;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5057F12EE404F44E0115EFFB1384FE1874C2B43;
IL2CPP_EXTERN_C String_t* _stringLiteralB79298C6C642DA2038FEEBF7FC6CA9A654512143;
IL2CPP_EXTERN_C String_t* _stringLiteralB928ECBA2BB2C44AABF412B6231C4D8DB09F7BC2;
IL2CPP_EXTERN_C String_t* _stringLiteralC16225242A6117C32A6A9FFDE3F42F18E3021283;
IL2CPP_EXTERN_C String_t* _stringLiteralC1697727C4C7951E30C0B70B0D6C58C77CEF3C07;
IL2CPP_EXTERN_C String_t* _stringLiteralC1B9EFD549BB78F80ADD694F8B1A95AA795D1D2B;
IL2CPP_EXTERN_C String_t* _stringLiteralC32A9155F1B008E0C47088E52DF4678325BC367C;
IL2CPP_EXTERN_C String_t* _stringLiteralC3BE681D5828982474C207A56D9A003D4CFD0148;
IL2CPP_EXTERN_C String_t* _stringLiteralC3D684C869C849FCF463A9B0B6C7F112A5B05A16;
IL2CPP_EXTERN_C String_t* _stringLiteralC73E747FCD6FB38C51F9779673814790609F0CDA;
IL2CPP_EXTERN_C String_t* _stringLiteralCC15A8D4F447F3F4481AF814066CA21FA58EA8CF;
IL2CPP_EXTERN_C String_t* _stringLiteralD1FE5A39DE6DE3AD99138CD9E03BDFD0652FF704;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F;
IL2CPP_EXTERN_C String_t* _stringLiteralD5EEA5F9AFC4D30E11D9368EBE9AFFA288250232;
IL2CPP_EXTERN_C String_t* _stringLiteralD74B600D07BCC5507E2270975151E727ED0D6CC7;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE50E69A6DAE5A67A5A867C40A68B0B4B953CE490;
IL2CPP_EXTERN_C String_t* _stringLiteralE5679A152186452DA1D8FC0086745E16E29081F0;
IL2CPP_EXTERN_C String_t* _stringLiteralE5AEE48728150928662E5D1641D240B0612C90AD;
IL2CPP_EXTERN_C String_t* _stringLiteralE97D3D6F205CCE33ADFE049762E6C19D573541CB;
IL2CPP_EXTERN_C String_t* _stringLiteralEA6DF1B6E8D557154D888CDD715E7C0951D3865D;
IL2CPP_EXTERN_C String_t* _stringLiteralEE1F8843F22A8B14EAE33F5899FC80F3AA1158B1;
IL2CPP_EXTERN_C String_t* _stringLiteralEFF75C4BB9833AFAAA9937DD85901254E55F7CC2;
IL2CPP_EXTERN_C String_t* _stringLiteralF09C4B253BD925FF24E729869576BF7974272FB3;
IL2CPP_EXTERN_C String_t* _stringLiteralF0BDDA92BD4F291FC7E4BB2093272E23C3A2F511;
IL2CPP_EXTERN_C String_t* _stringLiteralF3644EBEF06BE0CFE24BB2DBA7B2EC1A4219D849;
IL2CPP_EXTERN_C String_t* _stringLiteralF46E967556969B437ACE4F09960A77DF1AB72E1C;
IL2CPP_EXTERN_C String_t* _stringLiteralF56AC6B06AA0EF25889ADD9D74EA4AEA523E791E;
IL2CPP_EXTERN_C String_t* _stringLiteralF7D3E5553C4C7BC0ED52463178507145B70809D5;
IL2CPP_EXTERN_C String_t* _stringLiteralF8B4E01F07D5E7A3EA4AABE60C24A5FC7145A7C1;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_mE5A9838FC938A7C9374855B4C8023F4C6DAACA99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.SortedDictionary`2<System.String,System.String>
struct SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t53AF86BBB805E94F10CAA9B43984EA7E6D7802E2* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t85701C476E14C33298DBCC71B6EDB93924F2AD33* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_tDA45F3E533BFF5C5B658B65637864286B43BA688* ____set_2;
};
struct Il2CppArrayBounds;

// OpenCVForUnity.CoreModule.Core
struct Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7  : public RuntimeObject
{
};

struct Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_StaticFields
{
	// System.String OpenCVForUnity.CoreModule.Core::VERSION
	String_t* ___VERSION_0;
	// System.String OpenCVForUnity.CoreModule.Core::NATIVE_LIBRARY_NAME
	String_t* ___NATIVE_LIBRARY_NAME_1;
	// System.Int32 OpenCVForUnity.CoreModule.Core::VERSION_MAJOR
	int32_t ___VERSION_MAJOR_2;
	// System.Int32 OpenCVForUnity.CoreModule.Core::VERSION_MINOR
	int32_t ___VERSION_MINOR_3;
	// System.Int32 OpenCVForUnity.CoreModule.Core::VERSION_REVISION
	int32_t ___VERSION_REVISION_4;
	// System.String OpenCVForUnity.CoreModule.Core::VERSION_STATUS
	String_t* ___VERSION_STATUS_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t2495390576AE0ED72FBED5FDBE91CFF5FD9DB908 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t2495390576AE0ED72FBED5FDBE91CFF5FD9DB908__padding[12];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D144_tE0DF6D4F7EF57BA135B49F30B4E592C6EA323760 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D144_tE0DF6D4F7EF57BA135B49F30B4E592C6EA323760__padding[144];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_tE6BCF9BD2D88C8363877657879C2AF3E6B654E32 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tE6BCF9BD2D88C8363877657879C2AF3E6B654E32__padding[16];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D160_t1B65D1DF2C805B029CD73F2CD9D18AF1F6E2EAEF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D160_t1B65D1DF2C805B029CD73F2CD9D18AF1F6E2EAEF__padding[160];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_tCFA050C2AA07BD21E153BB37BF002E75A707AACF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tCFA050C2AA07BD21E153BB37BF002E75A707AACF__padding[20];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_t53460FA5063F711D5703E0A2786CB8FF95B12D07 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t53460FA5063F711D5703E0A2786CB8FF95B12D07__padding[24];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2504
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2504_t3D7794DAB062CBB9AA16AF5CE5DE5192096B251C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2504_t3D7794DAB062CBB9AA16AF5CE5DE5192096B251C__padding[2504];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_tCEEE1CCD2AD31596335FE2173399D6A33360ED10 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tCEEE1CCD2AD31596335FE2173399D6A33360ED10__padding[32];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_tF4B55B99DA47CC25462CE17F9C9002F4AAD2C3F6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tF4B55B99DA47CC25462CE17F9C9002F4AAD2C3F6__padding[36];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t1A3F382F3AAB53A0474A20348457D010D1C84CD1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t1A3F382F3AAB53A0474A20348457D010D1C84CD1__padding[64];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D72_tDAC4F181D94F0879D0164BE5DB5708E9FB433AF4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_tDAC4F181D94F0879D0164BE5DB5708E9FB433AF4__padding[72];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D76_t29915989D31928D909ACBDB41AD8AE3C16AB391E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t29915989D31928D909ACBDB41AD8AE3C16AB391E__padding[76];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D96_tD276EDD98918902C32E778A21984905DCCA6BA30 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tD276EDD98918902C32E778A21984905DCCA6BA30__padding[96];
	};
};
#pragma pack(pop, tp)

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t93D7F7DB3E7ECFD10D6EE350A2AD3C9A74295971  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t93D7F7DB3E7ECFD10D6EE350A2AD3C9A74295971_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::01C5C0219C7E13461478A2B6E479A09A0F60A7FF489C517F1C17BDD536DA536A
	__StaticArrayInitTypeSizeU3D72_tDAC4F181D94F0879D0164BE5DB5708E9FB433AF4 ___01C5C0219C7E13461478A2B6E479A09A0F60A7FF489C517F1C17BDD536DA536A_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::0335286338CDA9775F8A26DFB34B122443FBC44E2390E6E6BB1A624942A6F3A6
	__StaticArrayInitTypeSizeU3D16_tE6BCF9BD2D88C8363877657879C2AF3E6B654E32 ___0335286338CDA9775F8A26DFB34B122443FBC44E2390E6E6BB1A624942A6F3A6_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::064A75D1964BA4F0D9D783708560C379406C425C2B9E2872E32D6AAFF1BD6BF0
	__StaticArrayInitTypeSizeU3D76_t29915989D31928D909ACBDB41AD8AE3C16AB391E ___064A75D1964BA4F0D9D783708560C379406C425C2B9E2872E32D6AAFF1BD6BF0_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::103DA6BBB6D49663C912D39B88A4D8AC7CD01F0B6F4C9000EDD2FCA302B521FD
	__StaticArrayInitTypeSizeU3D64_t1A3F382F3AAB53A0474A20348457D010D1C84CD1 ___103DA6BBB6D49663C912D39B88A4D8AC7CD01F0B6F4C9000EDD2FCA302B521FD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1430C2A5AC00306969FDDC3B8B45CF9EBA575491B8B9F6C84DB731F81FB4FDF0
	__StaticArrayInitTypeSizeU3D16_tE6BCF9BD2D88C8363877657879C2AF3E6B654E32 ___1430C2A5AC00306969FDDC3B8B45CF9EBA575491B8B9F6C84DB731F81FB4FDF0_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::178393418C5E1ABE8E468194ACDDED7F1FE438CE21B7BF8452E07572890B8BF3
	__StaticArrayInitTypeSizeU3D16_tE6BCF9BD2D88C8363877657879C2AF3E6B654E32 ___178393418C5E1ABE8E468194ACDDED7F1FE438CE21B7BF8452E07572890B8BF3_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::1863FB2174065BAACCC5BF04D79744BA2E3D3DD6EE5A6D52CEE54A69D3517E24
	__StaticArrayInitTypeSizeU3D20_tCFA050C2AA07BD21E153BB37BF002E75A707AACF ___1863FB2174065BAACCC5BF04D79744BA2E3D3DD6EE5A6D52CEE54A69D3517E24_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::1B1E5086EF3DC5CF562E13A8D4561FB3A687811D1C6859673EE4CED833365EB1
	__StaticArrayInitTypeSizeU3D72_tDAC4F181D94F0879D0164BE5DB5708E9FB433AF4 ___1B1E5086EF3DC5CF562E13A8D4561FB3A687811D1C6859673EE4CED833365EB1_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::3553F9E356EAB6B2A0BCC3509C056364B647930A39BBA801254281A7F9BDC8B6
	__StaticArrayInitTypeSizeU3D32_tCEEE1CCD2AD31596335FE2173399D6A33360ED10 ___3553F9E356EAB6B2A0BCC3509C056364B647930A39BBA801254281A7F9BDC8B6_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::359BF585F8501F3E587108E6B37E8C6212E5AAAB952CCD6E078BDA28A21C8217
	__StaticArrayInitTypeSizeU3D16_tE6BCF9BD2D88C8363877657879C2AF3E6B654E32 ___359BF585F8501F3E587108E6B37E8C6212E5AAAB952CCD6E078BDA28A21C8217_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::364F11652C6EDB9E60F026158D31A58BA1DCD3958EBE374DFA1943CEF9736E99
	__StaticArrayInitTypeSizeU3D32_tCEEE1CCD2AD31596335FE2173399D6A33360ED10 ___364F11652C6EDB9E60F026158D31A58BA1DCD3958EBE374DFA1943CEF9736E99_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::51D8EAA7F363237C4A175BAE2A0C4454744E216227D356EDB5C82FF882D0CBA0
	__StaticArrayInitTypeSizeU3D36_tF4B55B99DA47CC25462CE17F9C9002F4AAD2C3F6 ___51D8EAA7F363237C4A175BAE2A0C4454744E216227D356EDB5C82FF882D0CBA0_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::5545AEAE8D5D252F5D389838F8C719FAD640C02209F4456882B816BE91075C4C
	__StaticArrayInitTypeSizeU3D12_t2495390576AE0ED72FBED5FDBE91CFF5FD9DB908 ___5545AEAE8D5D252F5D389838F8C719FAD640C02209F4456882B816BE91075C4C_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::6BAB56D2F81D4B5A2DBF102BF6A6FF7D5211A475FC5F97813F977E8BA714B07D
	__StaticArrayInitTypeSizeU3D32_tCEEE1CCD2AD31596335FE2173399D6A33360ED10 ___6BAB56D2F81D4B5A2DBF102BF6A6FF7D5211A475FC5F97813F977E8BA714B07D_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::6CF91A6516FB9202004C5FF854DDD4A37AA22E792B817B03CFBC763A4A1A3DE1
	__StaticArrayInitTypeSizeU3D72_tDAC4F181D94F0879D0164BE5DB5708E9FB433AF4 ___6CF91A6516FB9202004C5FF854DDD4A37AA22E792B817B03CFBC763A4A1A3DE1_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6F437F03C638A2AEEDF687AEFC79020B022EED97F48CAB6A6063E98A07BFC082
	__StaticArrayInitTypeSizeU3D16_tE6BCF9BD2D88C8363877657879C2AF3E6B654E32 ___6F437F03C638A2AEEDF687AEFC79020B022EED97F48CAB6A6063E98A07BFC082_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::77D4B2F5AE13AE7A6BFF598D0AD62E68CE7CE789FF9D3051770AD82E49F33923
	__StaticArrayInitTypeSizeU3D20_tCFA050C2AA07BD21E153BB37BF002E75A707AACF ___77D4B2F5AE13AE7A6BFF598D0AD62E68CE7CE789FF9D3051770AD82E49F33923_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7BE052A56B4FEAA2A0CCB59AB86BE61B77111EDDDEC90FA95B7B9E183523316E
	__StaticArrayInitTypeSizeU3D16_tE6BCF9BD2D88C8363877657879C2AF3E6B654E32 ___7BE052A56B4FEAA2A0CCB59AB86BE61B77111EDDDEC90FA95B7B9E183523316E_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::7D7BE7B3C18E77679138CAE523A86B4D6CD0F90210A724C8ABD4CE34E1A94A3E
	__StaticArrayInitTypeSizeU3D72_tDAC4F181D94F0879D0164BE5DB5708E9FB433AF4 ___7D7BE7B3C18E77679138CAE523A86B4D6CD0F90210A724C8ABD4CE34E1A94A3E_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::8A71373E4841F4578B6680E8305D366FF43D40CC0B73637473645F4945AB245D
	__StaticArrayInitTypeSizeU3D36_tF4B55B99DA47CC25462CE17F9C9002F4AAD2C3F6 ___8A71373E4841F4578B6680E8305D366FF43D40CC0B73637473645F4945AB245D_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::9590713154B8534CDE8503BCB5E58337A57299C81B648AD1394839DB6033A5BD
	__StaticArrayInitTypeSizeU3D24_t53460FA5063F711D5703E0A2786CB8FF95B12D07 ___9590713154B8534CDE8503BCB5E58337A57299C81B648AD1394839DB6033A5BD_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9F96B5AD6D9974161BF5F21EBEAB8311F815931A9B97FAAFDC11CBA8549923F5
	__StaticArrayInitTypeSizeU3D32_tCEEE1CCD2AD31596335FE2173399D6A33360ED10 ___9F96B5AD6D9974161BF5F21EBEAB8311F815931A9B97FAAFDC11CBA8549923F5_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2504 <PrivateImplementationDetails>::A8ACF213A67B3B78C5FCCFAAC336EA6E24A7624C080E69705F79970682179C57
	__StaticArrayInitTypeSizeU3D2504_t3D7794DAB062CBB9AA16AF5CE5DE5192096B251C ___A8ACF213A67B3B78C5FCCFAAC336EA6E24A7624C080E69705F79970682179C57_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160 <PrivateImplementationDetails>::C49E12FE7EA2276C34DFC3179710D02BE0C49ADA9A8240C7F3C73F29AA4B0A51
	__StaticArrayInitTypeSizeU3D160_t1B65D1DF2C805B029CD73F2CD9D18AF1F6E2EAEF ___C49E12FE7EA2276C34DFC3179710D02BE0C49ADA9A8240C7F3C73F29AA4B0A51_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::CD9782FB37493DC1E48F0E74D59D7BE9FB592C8D37A32FCF610BE49E2D9D68C0
	__StaticArrayInitTypeSizeU3D32_tCEEE1CCD2AD31596335FE2173399D6A33360ED10 ___CD9782FB37493DC1E48F0E74D59D7BE9FB592C8D37A32FCF610BE49E2D9D68C0_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144 <PrivateImplementationDetails>::D2D2CA2BDF0543FE621F956BF23D46D48BD1CF719AF679FF40FA244106836BA2
	__StaticArrayInitTypeSizeU3D144_tE0DF6D4F7EF57BA135B49F30B4E592C6EA323760 ___D2D2CA2BDF0543FE621F956BF23D46D48BD1CF719AF679FF40FA244106836BA2_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D5E5AB7278EACFF319D1F7B41F69341903F40BF572784BEBCAFD8FC6258714A1
	__StaticArrayInitTypeSizeU3D72_tDAC4F181D94F0879D0164BE5DB5708E9FB433AF4 ___D5E5AB7278EACFF319D1F7B41F69341903F40BF572784BEBCAFD8FC6258714A1_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::DD0610F4E8E9256A415C35277BD68731B3047026FB25492B4E44EAA739BCEC39
	__StaticArrayInitTypeSizeU3D12_t2495390576AE0ED72FBED5FDBE91CFF5FD9DB908 ___DD0610F4E8E9256A415C35277BD68731B3047026FB25492B4E44EAA739BCEC39_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::DEFE2A44F5B1A83AD564E9644F68CE22F29EDA535AA7110ADB879971A1902EAA
	__StaticArrayInitTypeSizeU3D96_tD276EDD98918902C32E778A21984905DCCA6BA30 ___DEFE2A44F5B1A83AD564E9644F68CE22F29EDA535AA7110ADB879971A1902EAA_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::DF7483864EC83F205722363991A4A13927F195A48FEC46BA03F2304A066A63E0
	__StaticArrayInitTypeSizeU3D12_t2495390576AE0ED72FBED5FDBE91CFF5FD9DB908 ___DF7483864EC83F205722363991A4A13927F195A48FEC46BA03F2304A066A63E0_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::FEDA6108BCF0AB8A6EDD6724CD350405EA50BC76C7CCE3BF717EB4E80F592F1F
	__StaticArrayInitTypeSizeU3D32_tCEEE1CCD2AD31596335FE2173399D6A33360ED10 ___FEDA6108BCF0AB8A6EDD6724CD350405EA50BC76C7CCE3BF717EB4E80F592F1F_30;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// OpenCVForUnityExample.OpenCVForUnityExample
struct OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text OpenCVForUnityExample.OpenCVForUnityExample::versionInfo
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___versionInfo_4;
	// UnityEngine.UI.ScrollRect OpenCVForUnityExample.OpenCVForUnityExample::scrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___scrollRect_5;
};

struct OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_StaticFields
{
	// System.Single OpenCVForUnityExample.OpenCVForUnityExample::verticalNormalizedPosition
	float ___verticalNormalizedPosition_6;
};

// OpenCVForUnityExample.ShowLicense
struct ShowLicense_tA5B3F0CB939DB49A020CE248B7A64A51887CB727  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// OpenCVForUnityExample.ShowSystemInfo
struct ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text OpenCVForUnityExample.ShowSystemInfo::systemInfoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___systemInfoText_4;
	// UnityEngine.UI.InputField OpenCVForUnityExample.ShowSystemInfo::systemInfoInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___systemInfoInputField_5;
};

// OpenCVForUnityExample.TouchController
struct TouchController_t6C6DDA6C14D5105DBA9BF05C5FED55E7F52D78BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject OpenCVForUnityExample.TouchController::Cube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Cube_4;
	// System.Single OpenCVForUnityExample.TouchController::Speed
	float ___Speed_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_m6C226B5BBE8AEF2B91B5DDE105C20BBE6DEC3D91_gshared (SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Add_mAE72A2CFC4B2E9B084A29EB709742CDCDB01FFE9_gshared (SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;

// System.String OpenCVForUnity.UnityUtils.Utils::getVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_getVersion_m8966F8FB3EB6BE57FB83BBA1A2938CC6818C342B (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScrollRect_get_verticalNormalizedPosition_m4FE766F04272C1805FDE2A4B72D80F6190841FA1 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> OpenCVForUnityExample.ShowSystemInfo::GetBuildInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ShowSystemInfo_GetBuildInfo_m68216A4B98F3F387EE49267A90D837A90CEFD681 (ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> OpenCVForUnityExample.ShowSystemInfo::GetDeviceInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ShowSystemInfo_GetDeviceInfo_mAF2A3A32D202766403E186ED7EFFBACC26938369 (ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.SortedDictionary`2<System.String,System.String> OpenCVForUnityExample.ShowSystemInfo::GetSystemInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* ShowSystemInfo_GetSystemInfo_m4920FFF5F918D20B9B8D647D430F746F2301169A (ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___permission0, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.String>::.ctor()
inline void SortedDictionary_2__ctor_mE5A9838FC938A7C9374855B4C8023F4C6DAACA99 (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE*, const RuntimeMethod*))SortedDictionary_2__ctor_m6C226B5BBE8AEF2B91B5DDE105C20BBE6DEC3D91_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0 (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE*, String_t*, String_t*, const RuntimeMethod*))SortedDictionary_2_Add_mAE72A2CFC4B2E9B084A29EB709742CDCDB01FFE9_gshared)(__this, ___key0, ___value1, method);
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, int32_t ___pointerId0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_Start_m9C0827F604F482B7137144CAB4AF8589B0140A44 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C633C699354EB2F41C5E42593AA9A86A71CB9A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77843243D4312B40A1163EFE55D56961E2352D09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD74B600D07BCC5507E2270975151E727ED0D6CC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	{
		// versionInfo.text = Core.NATIVE_LIBRARY_NAME + " " + Utils.getVersion() + " (" + Core.VERSION + ")";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___versionInfo_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_StaticFields*)il2cpp_codegen_static_fields_for(Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var))->___NATIVE_LIBRARY_NAME_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Utils_getVersion_m8966F8FB3EB6BE57FB83BBA1A2938CC6818C342B(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ((Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_StaticFields*)il2cpp_codegen_static_fields_for(Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var))->___VERSION_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_11);
		// versionInfo.text += " / UnityEditor " + Application.unityVersion;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___versionInfo_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = L_12;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_13);
		String_t* L_15;
		L_15 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_14, _stringLiteral5C633C699354EB2F41C5E42593AA9A86A71CB9A6, L_15, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_16);
		// versionInfo.text += " / ";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___versionInfo_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = L_17;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_18);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_20);
		// versionInfo.text += "Android";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___versionInfo_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = L_21;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_22);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_23, _stringLiteral77843243D4312B40A1163EFE55D56961E2352D09, NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_24);
		// versionInfo.text += " ";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___versionInfo_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = L_25;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_26);
		String_t* L_28;
		L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_27, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_28);
		// versionInfo.text += "IL2CPP";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = __this->___versionInfo_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = L_29;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_30);
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_31, _stringLiteralD74B600D07BCC5507E2270975151E727ED0D6CC7, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_32);
		// scrollRect.verticalNormalizedPosition = verticalNormalizedPosition;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_33 = __this->___scrollRect_5;
		il2cpp_codegen_runtime_class_init_inline(OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_il2cpp_TypeInfo_var);
		float L_34 = ((OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_StaticFields*)il2cpp_codegen_static_fields_for(OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_il2cpp_TypeInfo_var))->___verticalNormalizedPosition_6;
		NullCheck(L_33);
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_Update_m13AE894D05403DDD70CFD51F81CA44D214543FDD (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnScrollRectValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnScrollRectValueChanged_m111BFED2BB89F3DDCEB91E938B028E2D785A8644 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// verticalNormalizedPosition = scrollRect.verticalNormalizedPosition;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___scrollRect_5;
		NullCheck(L_0);
		float L_1;
		L_1 = ScrollRect_get_verticalNormalizedPosition_m4FE766F04272C1805FDE2A4B72D80F6190841FA1(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_il2cpp_TypeInfo_var);
		((OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_StaticFields*)il2cpp_codegen_static_fields_for(OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_il2cpp_TypeInfo_var))->___verticalNormalizedPosition_6 = L_1;
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnShowSystemInfoButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnShowSystemInfoButtonClick_m2D204D9DE957D1C33E544BB71D0013C37DD8AD68 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral879786CC55E8F64298B89F9D4F64928DF47182A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ShowSystemInfo");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral879786CC55E8F64298B89F9D4F64928DF47182A8, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnShowLicenseButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnShowLicenseButtonClick_mA73B6D3BBE130B0B8770C82A26DD728FE862672F (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CEA2A9D9E1B5693EE770EE031EFCE8F11914430);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ShowLicense");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral4CEA2A9D9E1B5693EE770EE031EFCE8F11914430, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnTexture2DToMatExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnTexture2DToMatExampleButtonClick_m6EA64119E1103F302EBFBA8290E74BDA392451DB (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5057F12EE404F44E0115EFFB1384FE1874C2B43);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Texture2DToMatExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralB5057F12EE404F44E0115EFFB1384FE1874C2B43, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnWebCamTextureToMatExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnWebCamTextureToMatExampleButtonClick_m62AECB9BF64B95ADD09372B9B90E2ABCEA634BC5 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8B4E01F07D5E7A3EA4AABE60C24A5FC7145A7C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("WebCamTextureToMatExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF8B4E01F07D5E7A3EA4AABE60C24A5FC7145A7C1, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnWebCamTextureToMatHelperExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnWebCamTextureToMatHelperExampleButtonClick_mA13D6A9D57179EBA43C861005BF58931CBD970F3 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADDE63313DA96A211D646BBAF4A547C4B393A27B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("WebCamTextureToMatHelperExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralADDE63313DA96A211D646BBAF4A547C4B393A27B, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnMatBasicProcessingExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnMatBasicProcessingExampleButtonClick_mDF6952BEE42B0E9521F0155955EC83A03E707D72 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3BE681D5828982474C207A56D9A003D4CFD0148);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MatBasicProcessingExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC3BE681D5828982474C207A56D9A003D4CFD0148, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnUtils_GetFilePathExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnUtils_GetFilePathExampleButtonClick_mAEA957269322750FB42030EF696EF6B7D51B0EBD (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67128AFD62D3C9F64060A3E7808E4257E2ABA774);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Utils_GetFilePathExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral67128AFD62D3C9F64060A3E7808E4257E2ABA774, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnComicFilterExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnComicFilterExampleButtonClick_mB88197F492389D2C4D1191081721831187B28799 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09017626BA82971740BD4291CF45772A86B3E5EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ComicFilterExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral09017626BA82971740BD4291CF45772A86B3E5EF, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnDocumentScannerExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnDocumentScannerExampleButtonClick_mAB5120BF42A448C55047058592D05F7B25C39B59 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E322DD28AD99228582F1D23A519A7F60828597F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("DocumentScannerExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral5E322DD28AD99228582F1D23A519A7F60828597F, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnPhysicalGreenScreenExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnPhysicalGreenScreenExampleButtonClick_mD97A0CDB1F4C9D6BF52F7F683951B66E971E10B4 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08C8850C5D220FA359EC8C564710DEA73AC8F7FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("PhysicalGreenScreenExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral08C8850C5D220FA359EC8C564710DEA73AC8F7FC, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnKeyFrameGreenScreenExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnKeyFrameGreenScreenExampleButtonClick_m9373F8DB0BFBDC82656314850E8CECEA0F12E5AE (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D59BCDBD882BB533047E0371B39D3AE556BF6E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("KeyFrameGreenScreenExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral9D59BCDBD882BB533047E0371B39D3AE556BF6E2, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnHandPoseEstimationExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnHandPoseEstimationExampleButtonClick_m4A8D2D893F756992ABA43560DA1755AF7EC20231 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65225412436BF0678B706A62576A064A4C32C80A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("HandPoseEstimationExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral65225412436BF0678B706A62576A064A4C32C80A, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnMultiObjectTrackingBasedOnColorExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnMultiObjectTrackingBasedOnColorExampleButtonClick_m848124DE75925D0996C438EB49D9FA315D8ED940 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32A8C1CA1ED7F5AE9E2B45E38D76C2F0E86A72D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MultiObjectTrackingBasedOnColorExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral32A8C1CA1ED7F5AE9E2B45E38D76C2F0E86A72D7, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnPolygonFilterExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnPolygonFilterExampleButtonClick_m7A5DDB4884755C72A54A7C0CEF755DCFEC7BC065 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8202A9BDBBB66F29F15E888F0974BC65A20DFEF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("PolygonFilterExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral8202A9BDBBB66F29F15E888F0974BC65A20DFEF5, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnAlphaBlendingExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnAlphaBlendingExampleButtonClick_mCF0708929047F7F31939EC49C0824367C7EA1DD4 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36BCE8811BC07D9F28B58F57CDE3DA2A30E8D4E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("AlphaBlendingExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral36BCE8811BC07D9F28B58F57CDE3DA2A30E8D4E2, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnMatToTextureInRenderThreadExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnMatToTextureInRenderThreadExampleButtonClick_mFBAAF1666A46E7A8F54FB8C9AC834ADD5C240054 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral094659F39773A731C5485FCEDF75E3491D8D2364);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MatToTextureInRenderThreadExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral094659F39773A731C5485FCEDF75E3491D8D2364, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnKMeansClusteringExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnKMeansClusteringExampleButtonClick_m7578DDC09D4FFD524E4F0D0EF14FF0A806269823 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71B42CAC608DA1510F14C18AC5781683FA93BB0D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("KMeansClusteringExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral71B42CAC608DA1510F14C18AC5781683FA93BB0D, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnPCAExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnPCAExampleButtonClick_m7F617625A7C0660E79B9D9A6D5A2615ADB2DAA85 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13575BE347F5D83A4764ED52D428C145955FE1AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("PCAExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral13575BE347F5D83A4764ED52D428C145955FE1AF, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnCircleDetectionExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnCircleDetectionExampleButtonClick_mB9DD3C2A5B0AE2ED235347C348743375899FAC83 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F996BDAC4E6B7826DAACE5CEB553A53AD238DDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("CircleDetectionExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral4F996BDAC4E6B7826DAACE5CEB553A53AD238DDB, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnConnectedComponentsExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnConnectedComponentsExampleButtonClick_m4835E02951B042437568BECABEEEB1AABE4E7EC3 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE97D3D6F205CCE33ADFE049762E6C19D573541CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ConnectedComponentsExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE97D3D6F205CCE33ADFE049762E6C19D573541CB, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnConvexHullExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnConvexHullExampleButtonClick_mB6F198BF379538947C5FA07B7BB292C2F3968D81 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC16225242A6117C32A6A9FFDE3F42F18E3021283);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ConvexHullExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC16225242A6117C32A6A9FFDE3F42F18E3021283, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnDrawingExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnDrawingExampleButtonClick_m1E28144351BE27B29712B44EE8E6E6FF73352074 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0BDDA92BD4F291FC7E4BB2093272E23C3A2F511);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("DrawingExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF0BDDA92BD4F291FC7E4BB2093272E23C3A2F511, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnGrabCutExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnGrabCutExampleButtonClick_m210E3487069F66B826CFBFF8946BD262105D4A3E (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BA0F833654DC30347600B912B5AF4E45E9ABC7D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GrabCutExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral2BA0F833654DC30347600B912B5AF4E45E9ABC7D, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnHoughLinesPExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnHoughLinesPExampleButtonClick_mEC73BF91496DDB52F44BC19778F42022A313DB89 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BF6E55472A7AEBE49130ABFF81E42D240BF6E49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("HoughLinesPExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral6BF6E55472A7AEBE49130ABFF81E42D240BF6E49, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnMatchShapesExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnMatchShapesExampleButtonClick_m7B102C7538E6150824E948110A5852A660E422A4 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral565962078D5F2D539D0129C5ED9E85D1098F3767);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MatchShapesExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral565962078D5F2D539D0129C5ED9E85D1098F3767, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnMatchTemplateExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnMatchTemplateExampleButtonClick_mDF6B852065BC5F951B4A84BB129E6819DE2F21C6 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68C5EBDA07B90F3EF90FC7FB728592CAAC4DAD86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MatchTemplateExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral68C5EBDA07B90F3EF90FC7FB728592CAAC4DAD86, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnThresholdExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnThresholdExampleButtonClick_m25B6B2CAAA8262569584E44E0BBE41EF5EDB5373 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE1F8843F22A8B14EAE33F5899FC80F3AA1158B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ThresholdExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralEE1F8843F22A8B14EAE33F5899FC80F3AA1158B1, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnWrapPerspectiveExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnWrapPerspectiveExampleButtonClick_mF3634FF7151E3904FD7892BA6D20CC8A757B372B (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB79298C6C642DA2038FEEBF7FC6CA9A654512143);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("WrapPerspectiveExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralB79298C6C642DA2038FEEBF7FC6CA9A654512143, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnVideoCaptureExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnVideoCaptureExampleButtonClick_m40C15037457FC4166C90AC0731714B079D4DEAF8 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5EEA5F9AFC4D30E11D9368EBE9AFFA288250232);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("VideoCaptureExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralD5EEA5F9AFC4D30E11D9368EBE9AFFA288250232, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnVideoCaptureCameraInputExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnVideoCaptureCameraInputExampleButtonClick_m2D9406A423372D44FA8DA82E70B91D5C218D8451 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32C002D38A1807996C6868372F388126936920CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("VideoCaptureCameraInputExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral32C002D38A1807996C6868372F388126936920CD, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnVideoWriterExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnVideoWriterExampleButtonClick_m2C6D282FA6E3179D61D4ACFE8F9ADF3E6D7C997B (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93DCCD0660AFE4E2495D6480BCD28D33391D3666);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("VideoWriterExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral93DCCD0660AFE4E2495D6480BCD28D33391D3666, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnBackgroundSubtractorExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnBackgroundSubtractorExampleButtonClick_m094490A4CA9CC1DB16AF79CF5A5B262B861D90D6 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072A0585E92FAF63F3E8C55231DD1FDE969E80DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("BackgroundSubtractorExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral072A0585E92FAF63F3E8C55231DD1FDE969E80DB, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnCamShiftExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnCamShiftExampleButtonClick_mA3294D473174C9C8B33B8E5BEE2D4B5477328B86 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22E792B9CD997482AF09A5F885E80B6FA787D1D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("CamShiftExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral22E792B9CD997482AF09A5F885E80B6FA787D1D4, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnKalmanFilterExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnKalmanFilterExampleButtonClick_mD1E4F56FDC3FC4CB388891664C3842C7F608E8AA (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA6DF1B6E8D557154D888CDD715E7C0951D3865D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("KalmanFilterExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralEA6DF1B6E8D557154D888CDD715E7C0951D3865D, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnOpticalFlowExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnOpticalFlowExampleButtonClick_mD3213465194448F23DEA47BB8ACD3CB28FCF18BA (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37D7BF99452E25F6529DFDD60BD37A96D3B12DD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("OpticalFlowExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral37D7BF99452E25F6529DFDD60BD37A96D3B12DD0, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnStereoBMExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnStereoBMExampleButtonClick_m28EF43F3B28BA9947BA16496A871610DDF493635 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE50E69A6DAE5A67A5A867C40A68B0B4B953CE490);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("StereoBMExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE50E69A6DAE5A67A5A867C40A68B0B4B953CE490, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnFeature2DExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnFeature2DExampleButtonClick_mAB07136C8F7C358163BAEAA2AA607A7250509273 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97EA77AC83F98D00ABACEABF5C90321984E6C48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Feature2DExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral97EA77AC83F98D00ABACEABF5C90321984E6C48D, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnMSERExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnMSERExampleButtonClick_mA52A934A4FC87F483D4F1E7C07E10A755B240E8A (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DA136303E988354D83DDB0DF630BA2E0C0293DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MSERExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral4DA136303E988354D83DDB0DF630BA2E0C0293DB, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnSimpleBlobExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnSimpleBlobExampleButtonClick_m843A2F878A79B670375A3457582683D72AA5B2E0 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF56AC6B06AA0EF25889ADD9D74EA4AEA523E791E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SimpleBlobExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF56AC6B06AA0EF25889ADD9D74EA4AEA523E791E, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnImwriteScreenCaptureExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnImwriteScreenCaptureExampleButtonClick_m46494AA823F33D12708928BCAA53623902A9C537 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6C20B080039A5CBB2676147D91B2DF899F6B587);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ImwriteScreenCaptureExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralA6C20B080039A5CBB2676147D91B2DF899F6B587, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnFaceDetectionExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnFaceDetectionExampleButtonClick_m4D95DEC8D49795345C4F7BCBFEFF0B7799416638 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86AE0426EFB6B456C9C8F1BBB8F71CBA68C8859A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("FaceDetectionExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral86AE0426EFB6B456C9C8F1BBB8F71CBA68C8859A, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnFaceDetectionWebCamExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnFaceDetectionWebCamExampleButtonClick_mF3E4109A37621DECF9A5A1410A2FC61973050BAF (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82DB4BBA502FD93811667E93017AA8405CD25EC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("FaceDetectionWebCamExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral82DB4BBA502FD93811667E93017AA8405CD25EC2, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnAsynchronousFaceDetectionWebCamExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnAsynchronousFaceDetectionWebCamExampleButtonClick_m4B3DA603B83536A0D1BA8EEE5CA73EE5024ACA8E (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56F18BAC2D0680F54E3281D9DD3EAE0F1828FE34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("AsynchronousFaceDetectionWebCamExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral56F18BAC2D0680F54E3281D9DD3EAE0F1828FE34, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnFaceDetectorYNWebCamExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnFaceDetectorYNWebCamExampleButtonClick_m5D956E9AC02B399E36C2D9A6300967E0C801E2DE (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC15A8D4F447F3F4481AF814066CA21FA58EA8CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("FaceDetectorYNWebCamExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralCC15A8D4F447F3F4481AF814066CA21FA58EA8CF, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnFaceRecognizerSFExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnFaceRecognizerSFExampleButtonClick_m7FB482B74E28606D499F9435084761AF85621C43 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F7E2635D4BDA89B2937C0D314C4A923F1A516D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("FaceRecognizerSFExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3F7E2635D4BDA89B2937C0D314C4A923F1A516D3, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnHOGDescriptorExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnHOGDescriptorExampleButtonClick_mB3758452FC39AD3A22609E0BEC2CED5B1E288CAA (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444FA374A2E6AF9D62250B109B505743F5D3D772);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("HOGDescriptorExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral444FA374A2E6AF9D62250B109B505743F5D3D772, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnQRCodeDetectorExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnQRCodeDetectorExampleButtonClick_m19650C6DC3474775A77291FBD299DA8A9FB530AB (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68D7874A8AC392EFF634A30E9CC049D57055D805);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("QRCodeDetectorExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral68D7874A8AC392EFF634A30E9CC049D57055D805, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnQRCodeDetectorWebCamExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnQRCodeDetectorWebCamExampleButtonClick_m760FEF5FCB9ADCC19F9A7BFBB4C57E4B8DAE665B (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97A88737F466C93B8A719214AD2797BA97B41B5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("QRCodeDetectorWebCamExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral97A88737F466C93B8A719214AD2797BA97B41B5B, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnQRCodeEncoderExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnQRCodeEncoderExampleButtonClick_m6E41BAB6D8CBD3034D40F61A6D37FD7EDEF2F479 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral661903FE1C819985669687CEA92E628CA1C8F025);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("QRCodeEncoderExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral661903FE1C819985669687CEA92E628CA1C8F025, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnColorizationExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnColorizationExampleButtonClick_m50AFB4AE2F2108E6AC48C76D2E26C9F5D26B6909 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AD337D710BC550EF7837EA38D86151E27059508);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ColorizationExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral1AD337D710BC550EF7837EA38D86151E27059508, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnDaSiamRPNTrackerExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnDaSiamRPNTrackerExampleButtonClick_m8262D1BFA84586EC5CCFBE407604C8514BC7D441 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AEB6C5C4D4F03F2A8AD503F20B7CDF5F0C09EF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("DaSiamRPNTrackerExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral1AEB6C5C4D4F03F2A8AD503F20B7CDF5F0C09EF5, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnFastNeuralStyleTransferExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnFastNeuralStyleTransferExampleButtonClick_m44B5D9F7D165614B8388500046D812853975FF66 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB3FB8B94B0BF97B1CDE3F5FC889865A102B42C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("FastNeuralStyleTransferExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral8CB3FB8B94B0BF97B1CDE3F5FC889865A102B42C, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnLibFaceDetectionV2ExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnLibFaceDetectionV2ExampleButtonClick_mB78CEE90F5C7FDACFAE1D5BFA724E595F63087D0 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C4A02C40C59D535D9330D03BEFF0FD779FE69AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LibFaceDetectionV2Example");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral7C4A02C40C59D535D9330D03BEFF0FD779FE69AD, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnLibFaceDetectionV3ExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnLibFaceDetectionV3ExampleButtonClick_mCF72CB1B2B63489360C6884D19C9E514930BB7FF (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF46E967556969B437ACE4F09960A77DF1AB72E1C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LibFaceDetectionV3Example");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF46E967556969B437ACE4F09960A77DF1AB72E1C, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnLightweightPoseEstimationExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnLightweightPoseEstimationExampleButtonClick_m745D793875A7D194FB4AF63AEA307C883E8CF3A2 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC73E747FCD6FB38C51F9779673814790609F0CDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LightweightPoseEstimationExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC73E747FCD6FB38C51F9779673814790609F0CDA, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnLightweightPoseEstimationWebCamExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnLightweightPoseEstimationWebCamExampleButtonClick_m6E881978612A57287D3E4F0A1437C777BD9898C5 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2C7CF27280F63AF399C252410D68B6C8877F0B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LightweightPoseEstimationWebCamExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralB2C7CF27280F63AF399C252410D68B6C8877F0B6, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnMaskRCNNExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnMaskRCNNExampleButtonClick_m0043764ADC04E5C165376405021691C87D999E7D (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1B9EFD549BB78F80ADD694F8B1A95AA795D1D2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MaskRCNNExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC1B9EFD549BB78F80ADD694F8B1A95AA795D1D2B, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnMobileNetSSDExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnMobileNetSSDExampleButtonClick_m2917E951F57E27DCA8D73FE9D2605BE4F53D7FD3 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7D3E5553C4C7BC0ED52463178507145B70809D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MobileNetSSDExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF7D3E5553C4C7BC0ED52463178507145B70809D5, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnMobileNetSSDWebCamExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnMobileNetSSDWebCamExampleButtonClick_mB10211D951FA54F6571824FB453B2587F01479F3 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5546C2411A2F434B00395A5DAEB67C301060371C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MobileNetSSDWebCamExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral5546C2411A2F434B00395A5DAEB67C301060371C, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnOpenPoseExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnOpenPoseExampleButtonClick_m19B1E30CB7247CADB3C04C7FDED9358EBA3B99CE (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0840A6BAC6FF53489BE3E3D934FA500B9505F2BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("OpenPoseExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0840A6BAC6FF53489BE3E3D934FA500B9505F2BE, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnResnetSSDFaceDetectionExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnResnetSSDFaceDetectionExampleButtonClick_mAF396F4FA1D6A97F51A7D0B06316C0CA37F54F0D (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0672FEB0E0793942C267D369AA4DA660CF55B508);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ResnetSSDFaceDetectionExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0672FEB0E0793942C267D369AA4DA660CF55B508, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnTensorflowInceptionWebCamExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnTensorflowInceptionWebCamExampleButtonClick_m6B903CD9E359A5F71F8BF2ADC3B42B532CA28571 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3644EBEF06BE0CFE24BB2DBA7B2EC1A4219D849);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TensorflowInceptionWebCamExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF3644EBEF06BE0CFE24BB2DBA7B2EC1A4219D849, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnTextOCRExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnTextOCRExampleButtonClick_mE8396BEDA534916DC34A12B95268E19DDCA27D84 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D4286118AF9BDDD44A66073F07461FFC886C720);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TextOCRExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3D4286118AF9BDDD44A66073F07461FFC886C720, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnYoloObjectDetectionExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnYoloObjectDetectionExampleButtonClick_m98F6A92A9136B1208A97B2CD3A469AA3414C2DFC (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF09C4B253BD925FF24E729869576BF7974272FB3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("YoloObjectDetectionExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF09C4B253BD925FF24E729869576BF7974272FB3, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnYoloObjectDetectionWebCamExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnYoloObjectDetectionWebCamExampleButtonClick_mB54E3F64BE0E3A31548603A1FC6D9B0CC7F70DFB (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B577CD70324891DD50A63CB766A17F598143BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("YoloObjectDetectionWebCamExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral88B577CD70324891DD50A63CB766A17F598143BF, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnKNNExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnKNNExampleButtonClick_mF1553CDC73964CA98433E20A750EE4144C78556F (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral833740EF14718A92FF7D10F097166FC6CF61B1F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("KNNExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral833740EF14718A92FF7D10F097166FC6CF61B1F7, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnSVMExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnSVMExampleButtonClick_mBB8135B5B570F49BEBF8AC063BDD05E32BF42341 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21971A82307FF5ADB6C85B9C9D473686FE1A5FB5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SVMExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral21971A82307FF5ADB6C85B9C9D473686FE1A5FB5, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnInpaintExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnInpaintExampleButtonClick_m8CE6EA2125F8255507E1AC26DC60AB8E9C5F0D6F (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EE2040F867CE87E19FD4C8B827680C3087771F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("InpaintExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral6EE2040F867CE87E19FD4C8B827680C3087771F5, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnSeamlessCloneExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnSeamlessCloneExampleButtonClick_mDF35D1FDBE91AB52192454B6578347ECB56BCA1B (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5AEE48728150928662E5D1641D240B0612C90AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SeamlessCloneExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE5AEE48728150928662E5D1641D240B0612C90AD, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnArUcoExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnArUcoExampleButtonClick_m29B6AEDE5E3F56B6B0900A2927E0BA58C22CEC83 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5A170FA066ABC33F11623F468C6A54804FD596E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ArUcoExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralA5A170FA066ABC33F11623F468C6A54804FD596E, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnArUcoWebCamExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnArUcoWebCamExampleButtonClick_m5C1F46CB6E2594B3729AA79D705371004FE169DF (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B3B45354638BB1D088C2F594255428143E253F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ArUcoWebCamExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral88B3B45354638BB1D088C2F594255428143E253F, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnArUcoCreateMarkerExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnArUcoCreateMarkerExampleButtonClick_m6B2D5CD5313ADFABE79E69BC9B0E3098FC9EA1B3 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1DB32457DB8CC2B803A300F8AB4C55F4E64A706);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ArUcoCreateMarkerExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralA1DB32457DB8CC2B803A300F8AB4C55F4E64A706, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnArUcoCameraCalibrationExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnArUcoCameraCalibrationExampleButtonClick_mD91527FFC5AFAE1E16B45DF9EC6A986DA0086206 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E6789DC3EC8740BAC44B3B398D83CF5E95C0978);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ArUcoCameraCalibrationExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral5E6789DC3EC8740BAC44B3B398D83CF5E95C0978, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnBarcodeDetectorExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnBarcodeDetectorExampleButtonClick_mBA3F09D605DF68A3006E9F7834596FDCB03A2043 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC03026892B069CF29F6496390458CA5BB0E267);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("BarcodeDetectorExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0FC03026892B069CF29F6496390458CA5BB0E267, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnBarcodeDetectorWebCamExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnBarcodeDetectorWebCamExampleButtonClick_mF4565613154A695D8F08A21A919794E4D355D659 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1FE5A39DE6DE3AD99138CD9E03BDFD0652FF704);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("BarcodeDetectorWebCamExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralD1FE5A39DE6DE3AD99138CD9E03BDFD0652FF704, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnFaceMarkExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnFaceMarkExampleButtonClick_mAC44538B0EB4BB60C56E60FF3C599429285AF712 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3D684C869C849FCF463A9B0B6C7F112A5B05A16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("FaceMarkExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC3D684C869C849FCF463A9B0B6C7F112A5B05A16, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnFaceRecognizerExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnFaceRecognizerExampleButtonClick_m4038BC8361394130CEDD13E842573BC71D5602C1 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB928ECBA2BB2C44AABF412B6231C4D8DB09F7BC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("FaceRecognizerExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralB928ECBA2BB2C44AABF412B6231C4D8DB09F7BC2, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnPlotExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnPlotExampleButtonClick_mF6CA15350F430C67B0023842BAF07B5FDD745AA0 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A02A2F3B2188034751454838D52A0FA5791DED8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("PlotExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral9A02A2F3B2188034751454838D52A0FA5791DED8, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnTextDetectionExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnTextDetectionExampleButtonClick_m452FA347CEDDEF6C2DDE2EA41F280FF93CEF0E2A (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2041EDE270259638082CD06E6F357797DF047796);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TextDetectionExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral2041EDE270259638082CD06E6F357797DF047796, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnTextRecognitionExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnTextRecognitionExampleButtonClick_mF918BC073D1C4858E2959B5705EB0890B06D2424 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92F6039A469369558AA50CA78FAA716C83E098E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TextRecognitionExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral92F6039A469369558AA50CA78FAA716C83E098E2, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnLegacyTrackingExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnLegacyTrackingExampleButtonClick_mA3F0FBF6B293ECF695F3FB9312AACD07F2F64DE8 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFF75C4BB9833AFAAA9937DD85901254E55F7CC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LegacyTrackingExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralEFF75C4BB9833AFAAA9937DD85901254E55F7CC2, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::OnTrackingExampleButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample_OnTrackingExampleButtonClick_mE57E27823C82433D224119B23B1B21CC228470E9 (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAF6CBEE5F0A03707E4B684673E3AFC7B9F8F43);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TrackingExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral2DAF6CBEE5F0A03707E4B684673E3AFC7B9F8F43, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample__ctor_m9F211BB326A0EF9A240B5F868035D9753193E76F (OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void OpenCVForUnityExample.OpenCVForUnityExample::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCVForUnityExample__cctor_mA76DAC21DACBCC13F7A8BC78B55427BD2F7EC96A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static float verticalNormalizedPosition = 1f;
		((OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_StaticFields*)il2cpp_codegen_static_fields_for(OpenCVForUnityExample_t9CD3232C03613625FFDC92D5107914457B650E04_il2cpp_TypeInfo_var))->___verticalNormalizedPosition_6 = (1.0f);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OpenCVForUnityExample.ShowLicense::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowLicense_Start_mFA6A980F850EAFE68C00BB7F9B39C49510365A7A (ShowLicense_tA5B3F0CB939DB49A020CE248B7A64A51887CB727* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.ShowLicense::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowLicense_Update_mF04BBF87C037417C23B1CC58A22470E7D5B126ED (ShowLicense_tA5B3F0CB939DB49A020CE248B7A64A51887CB727* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.ShowLicense::OnBackButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowLicense_OnBackButtonClick_m9AF278D186A3FB6141F582924D09350E26CD0502 (ShowLicense_tA5B3F0CB939DB49A020CE248B7A64A51887CB727* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral728CAD7803E88C6170EB59F695FCDDB7E137A171);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("OpenCVForUnityExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral728CAD7803E88C6170EB59F695FCDDB7E137A171, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.ShowLicense::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowLicense__ctor_mD3183ECCA1126674050BCCF007DD700A5E6BC6C3 (ShowLicense_tA5B3F0CB939DB49A020CE248B7A64A51887CB727* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OpenCVForUnityExample.ShowSystemInfo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSystemInfo_Start_m9BB8D23EB42C3EF755385AC037C250DB950202B0 (ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BE0C450502BF871D80DD013F3C43186E8E1EE6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D6D2A3913299C75E9A370FFC1B3847B308C903C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A9155F1B008E0C47088E52DF4678325BC367C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5679A152186452DA1D8FC0086745E16E29081F0);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// sb.Append("###### Build Info ######\n");
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralC32A9155F1B008E0C47088E52DF4678325BC367C, NULL);
		// IDictionary<string, string> buildInfo = GetBuildInfo();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3;
		L_3 = ShowSystemInfo_GetBuildInfo_m68216A4B98F3F387EE49267A90D837A90CEFD681(__this, NULL);
		V_1 = L_3;
		// foreach (string key in buildInfo.Keys)
		RuntimeObject* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_5);
		V_4 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_4;
					if (!L_7)
					{
						goto IL_0071;
					}
				}
				{
					RuntimeObject* L_8 = V_4;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0071:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005b_1;
			}

IL_0028_1:
			{
				// foreach (string key in buildInfo.Keys)
				RuntimeObject* L_9 = V_4;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_9);
				V_5 = L_10;
				// sb.Append(key).Append(" = ").Append(buildInfo[key]).Append("\n");
				StringBuilder_t* L_11 = V_0;
				String_t* L_12 = V_5;
				NullCheck(L_11);
				StringBuilder_t* L_13;
				L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_12, NULL);
				NullCheck(L_13);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, NULL);
				RuntimeObject* L_15 = V_1;
				String_t* L_16 = V_5;
				NullCheck(L_15);
				String_t* L_17;
				L_17 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_15, L_16);
				NullCheck(L_14);
				StringBuilder_t* L_18;
				L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_17, NULL);
				NullCheck(L_18);
				StringBuilder_t* L_19;
				L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
			}

IL_005b_1:
			{
				// foreach (string key in buildInfo.Keys)
				RuntimeObject* L_20 = V_4;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// sb.Append("\n");
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		// sb.Append("###### Device Info ######\n");
		StringBuilder_t* L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteral1BE0C450502BF871D80DD013F3C43186E8E1EE6D, NULL);
		// IDictionary<string, string> deviceInfo = GetDeviceInfo();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_26;
		L_26 = ShowSystemInfo_GetDeviceInfo_mAF2A3A32D202766403E186ED7EFFBACC26938369(__this, NULL);
		V_2 = L_26;
		// foreach (string key in deviceInfo.Keys)
		RuntimeObject* L_27 = V_2;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_28);
		V_4 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00de:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_30 = V_4;
					if (!L_30)
					{
						goto IL_00e9;
					}
				}
				{
					RuntimeObject* L_31 = V_4;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_00e9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d3_1;
			}

IL_00a0_1:
			{
				// foreach (string key in deviceInfo.Keys)
				RuntimeObject* L_32 = V_4;
				NullCheck(L_32);
				String_t* L_33;
				L_33 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				// sb.Append(key).Append(" = ").Append(deviceInfo[key]).Append("\n");
				StringBuilder_t* L_34 = V_0;
				String_t* L_35 = V_6;
				NullCheck(L_34);
				StringBuilder_t* L_36;
				L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_35, NULL);
				NullCheck(L_36);
				StringBuilder_t* L_37;
				L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, NULL);
				RuntimeObject* L_38 = V_2;
				String_t* L_39 = V_6;
				NullCheck(L_38);
				String_t* L_40;
				L_40 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_38, L_39);
				NullCheck(L_37);
				StringBuilder_t* L_41;
				L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, L_40, NULL);
				NullCheck(L_41);
				StringBuilder_t* L_42;
				L_42 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_41, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
			}

IL_00d3_1:
			{
				// foreach (string key in deviceInfo.Keys)
				RuntimeObject* L_43 = V_4;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00a0_1;
				}
			}
			{
				goto IL_00ea;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ea:
	{
		// sb.Append("\n");
		StringBuilder_t* L_45 = V_0;
		NullCheck(L_45);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_45, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		// sb.Append("###### System Info ######\n");
		StringBuilder_t* L_47 = V_0;
		NullCheck(L_47);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_47, _stringLiteral8D6D2A3913299C75E9A370FFC1B3847B308C903C, NULL);
		// IDictionary<string, string> systemInfo = GetSystemInfo();
		SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_49;
		L_49 = ShowSystemInfo_GetSystemInfo_m4920FFF5F918D20B9B8D647D430F746F2301169A(__this, NULL);
		V_3 = L_49;
		// foreach (string key in systemInfo.Keys)
		RuntimeObject* L_50 = V_3;
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_51);
		V_4 = L_52;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0156:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_53 = V_4;
					if (!L_53)
					{
						goto IL_0161;
					}
				}
				{
					RuntimeObject* L_54 = V_4;
					NullCheck(L_54);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_54);
				}

IL_0161:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_014b_1;
			}

IL_0118_1:
			{
				// foreach (string key in systemInfo.Keys)
				RuntimeObject* L_55 = V_4;
				NullCheck(L_55);
				String_t* L_56;
				L_56 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_55);
				V_7 = L_56;
				// sb.Append(key).Append(" = ").Append(systemInfo[key]).Append("\n");
				StringBuilder_t* L_57 = V_0;
				String_t* L_58 = V_7;
				NullCheck(L_57);
				StringBuilder_t* L_59;
				L_59 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_57, L_58, NULL);
				NullCheck(L_59);
				StringBuilder_t* L_60;
				L_60 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_59, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, NULL);
				RuntimeObject* L_61 = V_3;
				String_t* L_62 = V_7;
				NullCheck(L_61);
				String_t* L_63;
				L_63 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_61, L_62);
				NullCheck(L_60);
				StringBuilder_t* L_64;
				L_64 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_60, L_63, NULL);
				NullCheck(L_64);
				StringBuilder_t* L_65;
				L_65 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_64, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
			}

IL_014b_1:
			{
				// foreach (string key in systemInfo.Keys)
				RuntimeObject* L_66 = V_4;
				NullCheck(L_66);
				bool L_67;
				L_67 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_66);
				if (L_67)
				{
					goto IL_0118_1;
				}
			}
			{
				goto IL_0162;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0162:
	{
		// sb.Append("#########################\n");
		StringBuilder_t* L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_t* L_69;
		L_69 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_68, _stringLiteralE5679A152186452DA1D8FC0086745E16E29081F0, NULL);
		// systemInfoText.text = systemInfoInputField.text = sb.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_70 = __this->___systemInfoText_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_71 = __this->___systemInfoInputField_5;
		StringBuilder_t* L_72 = V_0;
		NullCheck(L_72);
		String_t* L_73;
		L_73 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_72);
		String_t* L_74 = L_73;
		V_8 = L_74;
		NullCheck(L_71);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_71, L_74, NULL);
		String_t* L_75 = V_8;
		NullCheck(L_70);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_70, L_75);
		// Debug.Log(sb.ToString());
		StringBuilder_t* L_76 = V_0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_76);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_77, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.ShowSystemInfo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSystemInfo_Update_mF7EDC2A9511A5FCC37BBD7246A054C62A8AE0C9C (ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> OpenCVForUnityExample.ShowSystemInfo::GetBuildInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ShowSystemInfo_GetBuildInfo_m68216A4B98F3F387EE49267A90D837A90CEFD681 (ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1293C919D0E59DF6C592CE515E0411AB1997A9BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17C2A502698E08BF777AFDFA2E7751B0CF582E43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral645B63743A30F42FC01E57216637071F9E612C18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77843243D4312B40A1163EFE55D56961E2352D09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral932DAA7806FCCE8AB5DFDBBE20BE689CD2E12A33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA801A527E639BE9A44DDCC5BC097490788A08259);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD74B600D07BCC5507E2270975151E727ED0D6CC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		// Dictionary<string, string> dict = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// dict.Add(ASSET_NAME + " version", Core.NATIVE_LIBRARY_NAME + " " + Utils.getVersion() + " (" + Core.VERSION + ")");
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_StaticFields*)il2cpp_codegen_static_fields_for(Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var))->___NATIVE_LIBRARY_NAME_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		il2cpp_codegen_runtime_class_init_inline(Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Utils_getVersion_m8966F8FB3EB6BE57FB83BBA1A2938CC6818C342B(NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ((Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_StaticFields*)il2cpp_codegen_static_fields_for(Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var))->___VERSION_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_12;
		L_12 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_11, NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral1293C919D0E59DF6C592CE515E0411AB1997A9BF, L_12, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// dict.Add("Build Unity version", Application.unityVersion);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = V_0;
		String_t* L_14;
		L_14 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_13);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_13, _stringLiteralA801A527E639BE9A44DDCC5BC097490788A08259, L_14, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// dict.Add("Build target", "Android");
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = V_0;
		NullCheck(L_15);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_15, _stringLiteral932DAA7806FCCE8AB5DFDBBE20BE689CD2E12A33, _stringLiteral77843243D4312B40A1163EFE55D56961E2352D09, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// dict.Add("Scripting backend", "IL2CPP");
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = V_0;
		NullCheck(L_16);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_16, _stringLiteral17C2A502698E08BF777AFDFA2E7751B0CF582E43, _stringLiteralD74B600D07BCC5507E2270975151E727ED0D6CC7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// dict.Add("Allow 'unsafe' Code", "Disabled");
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17 = V_0;
		NullCheck(L_17);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_17, _stringLiteral645B63743A30F42FC01E57216637071F9E612C18, _stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// return dict;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = V_0;
		return L_18;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> OpenCVForUnityExample.ShowSystemInfo::GetDeviceInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ShowSystemInfo_GetDeviceInfo_mAF2A3A32D202766403E186ED7EFFBACC26938369 (ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C069334B215D38C5D14462DC7F845470ABDFE91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral149D5C668B434AB65CAEAC22E8715CD541290062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A3F1182F32E60381624B2C12C4E4AD6C9673B3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47EB513E374108E26037B7F9B4BF7E16901170BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FF0415543A28302256E4687FCDDCCED98AB2671);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EB344AB367F448EA2286188D14F1E57AFE2A600);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2113A207765BA2D8ABB7F50B4388B872AC1E2D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB29863D97935F87245759F48D47366B206A87A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1697727C4C7951E30C0B70B0D6C58C77CEF3C07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Dictionary<string, string> dict = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		// dict.Add("Android.Permission.Camera", UnityEngine.Android.Permission.HasUserAuthorizedPermission(UnityEngine.Android.Permission.Camera).ToString());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		bool L_2;
		L_2 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral1A3F1182F32E60381624B2C12C4E4AD6C9673B3A, L_3, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// dict.Add("Android.Permission.CoarseLocation", UnityEngine.Android.Permission.HasUserAuthorizedPermission(UnityEngine.Android.Permission.CoarseLocation).ToString());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = L_1;
		bool L_5;
		L_5 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteralB29863D97935F87245759F48D47366B206A87A11, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_4);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, _stringLiteral5EB344AB367F448EA2286188D14F1E57AFE2A600, L_6, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// dict.Add("Android.Permission.ExternalStorageRead", UnityEngine.Android.Permission.HasUserAuthorizedPermission(UnityEngine.Android.Permission.ExternalStorageRead).ToString());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = L_4;
		bool L_8;
		L_8 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteralB2113A207765BA2D8ABB7F50B4388B872AC1E2D2, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_7);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_7, _stringLiteral0C069334B215D38C5D14462DC7F845470ABDFE91, L_9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// dict.Add("Android.Permission.ExternalStorageWrite", UnityEngine.Android.Permission.HasUserAuthorizedPermission(UnityEngine.Android.Permission.ExternalStorageWrite).ToString());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = L_7;
		bool L_11;
		L_11 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral47EB513E374108E26037B7F9B4BF7E16901170BD, NULL);
		V_0 = L_11;
		String_t* L_12;
		L_12 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_10);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_10, _stringLiteral4FF0415543A28302256E4687FCDDCCED98AB2671, L_12, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// dict.Add("Android.Permission.FineLocation", UnityEngine.Android.Permission.HasUserAuthorizedPermission(UnityEngine.Android.Permission.FineLocation).ToString());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = L_10;
		bool L_14;
		L_14 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_13);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_13, _stringLiteralC1697727C4C7951E30C0B70B0D6C58C77CEF3C07, L_15, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// dict.Add("Android.Permission.Microphone", UnityEngine.Android.Permission.HasUserAuthorizedPermission(UnityEngine.Android.Permission.Microphone).ToString());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = L_13;
		bool L_17;
		L_17 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
		V_0 = L_17;
		String_t* L_18;
		L_18 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_16);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_16, _stringLiteral149D5C668B434AB65CAEAC22E8715CD541290062, L_18, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// return dict;
		return L_16;
	}
}
// System.Collections.Generic.SortedDictionary`2<System.String,System.String> OpenCVForUnityExample.ShowSystemInfo::GetSystemInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* ShowSystemInfo_GetSystemInfo_m4920FFF5F918D20B9B8D647D430F746F2301169A (ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_mE5A9838FC938A7C9374855B4C8023F4C6DAACA99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25FCFBD128DE861A3BD0518FA355C68762F3D3A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C4CF5F8BFCB023E20DF346B8A8640587FCF727E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* V_0 = NULL;
	Type_t* V_1 = NULL;
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* V_2 = NULL;
	int32_t V_3 = 0;
	MemberInfo_t* V_4 = NULL;
	PropertyInfo_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	Exception_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	{
		// SortedDictionary<string, string> dict = new SortedDictionary<string, string>();
		SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_0 = (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE*)il2cpp_codegen_object_new(SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SortedDictionary_2__ctor_mE5A9838FC938A7C9374855B4C8023F4C6DAACA99(L_0, SortedDictionary_2__ctor_mE5A9838FC938A7C9374855B4C8023F4C6DAACA99_RuntimeMethod_var);
		V_0 = L_0;
		// Type type = typeof(SystemInfo);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_1 = L_2;
		// MemberInfo[] members = type.GetMembers(
		//     BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Static);
		Type_t* L_3 = V_1;
		NullCheck(L_3);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_4;
		L_4 = VirtualFuncInvoker1< MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*, int32_t >::Invoke(91 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_3, ((int32_t)56));
		// foreach (MemberInfo mb in members)
		V_2 = L_4;
		V_3 = 0;
		goto IL_00cb;
	}

IL_0021:
	{
		// foreach (MemberInfo mb in members)
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		MemberInfo_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
	}
	try
	{// begin try (depth: 1)
		{
			// if (mb.MemberType == MemberTypes.Property)
			MemberInfo_t* L_9 = V_4;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_9);
			if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)16)))))
			{
				goto IL_00a4_1;
			}
		}
		{
			// if (mb.Name == "deviceUniqueIdentifier")
			MemberInfo_t* L_11 = V_4;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
			bool L_13;
			L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral25FCFBD128DE861A3BD0518FA355C68762F3D3A0, NULL);
			if (!L_13)
			{
				goto IL_0058_1;
			}
		}
		{
			// dict.Add(mb.Name, "xxxxxxxxxxxxxxxxxxxxxxxx");
			SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_14 = V_0;
			MemberInfo_t* L_15 = V_4;
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			NullCheck(L_14);
			SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0(L_14, L_16, _stringLiteral4C4CF5F8BFCB023E20DF346B8A8640587FCF727E, SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0_RuntimeMethod_var);
			// continue;
			goto IL_00c7;
		}

IL_0058_1:
		{
			// PropertyInfo pr = type.GetProperty(mb.Name);
			Type_t* L_17 = V_1;
			MemberInfo_t* L_18 = V_4;
			NullCheck(L_18);
			String_t* L_19;
			L_19 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
			NullCheck(L_17);
			PropertyInfo_t* L_20;
			L_20 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_17, L_19, NULL);
			V_5 = L_20;
			// if (pr != null)
			PropertyInfo_t* L_21 = V_5;
			bool L_22;
			L_22 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_21, (PropertyInfo_t*)NULL, NULL);
			if (!L_22)
			{
				goto IL_0092_1;
			}
		}
		{
			// object resobj = pr.GetValue(type, null);
			PropertyInfo_t* L_23 = V_5;
			Type_t* L_24 = V_1;
			NullCheck(L_23);
			RuntimeObject* L_25;
			L_25 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_23, L_24, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
			V_6 = L_25;
			// dict.Add(mb.Name, resobj.ToString());
			SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_26 = V_0;
			MemberInfo_t* L_27 = V_4;
			NullCheck(L_27);
			String_t* L_28;
			L_28 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_27);
			RuntimeObject* L_29 = V_6;
			NullCheck(L_29);
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
			NullCheck(L_26);
			SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0(L_26, L_28, L_30, SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0_RuntimeMethod_var);
			goto IL_00a4_1;
		}

IL_0092_1:
		{
			// dict.Add(mb.Name, "");
			SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_31 = V_0;
			MemberInfo_t* L_32 = V_4;
			NullCheck(L_32);
			String_t* L_33;
			L_33 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_32);
			NullCheck(L_31);
			SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0(L_31, L_33, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0_RuntimeMethod_var);
		}

IL_00a4_1:
		{
			// }
			goto IL_00c7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a6;
		}
		throw e;
	}

CATCH_00a6:
	{// begin catch(System.Exception)
		{
			// catch (Exception e)
			V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.Log("Exception: " + e);
			Exception_t* L_34 = V_7;
			Exception_t* L_35 = L_34;
			G_B10_0 = L_35;
			G_B10_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA95898025CC11DF26437FBBC4B43CA5F697F5DB1));
			if (L_35)
			{
				G_B11_0 = L_35;
				G_B11_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA95898025CC11DF26437FBBC4B43CA5F697F5DB1));
				goto IL_00b6;
			}
		}
		{
			G_B12_0 = ((String_t*)(NULL));
			G_B12_1 = G_B10_1;
			goto IL_00bb;
		}

IL_00b6:
		{
			NullCheck(G_B11_0);
			String_t* L_36;
			L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B11_0);
			G_B12_0 = L_36;
			G_B12_1 = G_B11_1;
		}

IL_00bb:
		{
			String_t* L_37;
			L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B12_1, G_B12_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_37, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c7;
		}
	}// end catch (depth: 1)

IL_00c7:
	{
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		// foreach (MemberInfo mb in members)
		int32_t L_39 = V_3;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_40 = V_2;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		// return dict;
		SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_41 = V_0;
		return L_41;
	}
}
// System.Void OpenCVForUnityExample.ShowSystemInfo::OnBackButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSystemInfo_OnBackButtonClick_m23BB3109579805B93F056324AA7D4DC6D66ED667 (ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral728CAD7803E88C6170EB59F695FCDDB7E137A171);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("OpenCVForUnityExample");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral728CAD7803E88C6170EB59F695FCDDB7E137A171, NULL);
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.ShowSystemInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSystemInfo__ctor_mCA813F67D6714A54507084A24DD2601C6B421295 (ShowSystemInfo_t1AA97BEAA0D97C15A13B714063949F70032285BA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OpenCVForUnityExample.TouchController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_Update_m229D0316CDCA0DA07932D89B27D4D07A0E0EFC7D (TouchController_t6C6DDA6C14D5105DBA9BF05C5FED55E7F52D78BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// int touchCount = Input.touchCount;
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		// if (touchCount == 1)
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0070;
		}
	}
	{
		// Touch t = Input.GetTouch (0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (EventSystem.current.IsPointerOverGameObject (t.fingerId))
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		int32_t L_3;
		L_3 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_0), NULL);
		NullCheck(L_2);
		bool L_4;
		L_4 = EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// switch (t.phase)
		int32_t L_5;
		L_5 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0070;
		}
	}
	{
		// float xAngle = t.deltaPosition.y * Speed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_0), NULL);
		float L_7 = L_6.___y_1;
		float L_8 = __this->___Speed_5;
		V_1 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		// float yAngle = -t.deltaPosition.x * Speed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_0), NULL);
		float L_10 = L_9.___x_0;
		float L_11 = __this->___Speed_5;
		V_2 = ((float)il2cpp_codegen_multiply(((-L_10)), L_11));
		// float zAngle = 0;
		V_3 = (0.0f);
		// Cube.transform.Rotate (xAngle, yAngle, zAngle, Space.World);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___Cube_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		float L_14 = V_1;
		float L_15 = V_2;
		float L_16 = V_3;
		NullCheck(L_13);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_13, L_14, L_15, L_16, 0, NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void OpenCVForUnityExample.TouchController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController__ctor_m10CCEF8D5087F2C3B0AA93CF4A062E9044690F63 (TouchController_t6C6DDA6C14D5105DBA9BF05C5FED55E7F52D78BF* __this, const RuntimeMethod* method) 
{
	{
		// public float Speed = 0.1f;
		__this->___Speed_5 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mA66BF4AF040F6B36698EF33B20F720A16C75D9E9 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
