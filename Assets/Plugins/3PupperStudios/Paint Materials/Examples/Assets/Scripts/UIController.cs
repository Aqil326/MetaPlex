using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.UI;

namespace ThreePupperStudios.PaintMaterials
{
    internal class UIController : MonoBehaviour
    {
        [SerializeField]
        private MatManager _manager;

        [SerializeField]
        private List<RawImage> _matButtonImages = new List<RawImage>();

        [SerializeField]
        private List<Text> _matButtons = new List<Text>();

        [SerializeField]
        private Renderer _targetRenderer;
        [SerializeField]
        private Category _category;

        private void Start()
        {
            SetCategory();
        }

        public void SetRenderer(Text text)
        {
            switch (text.text)
            {
                case "Walls":
                    _targetRenderer = _manager.Walls;
                    break;
                case "Ceiling":
                    _targetRenderer = _manager.Ceiling;
                    break;
                case "Accent 1":
                    _targetRenderer = _manager.AccentWall;
                    break;
                case "Accent 2":
                    _targetRenderer = _manager.SecondaryAccent;
                    break;
            }
        }

        public void SetCategory(Text text)
        {
            var category = text.text;
            category = category.Replace(" ", "");
            var canParse = Enum.TryParse(category, out Category actualCategory);
            if (!canParse)
            {
                return;
            }

            _category = actualCategory;
            SetCategory();
        }

        private void SetCategory()
        {
            var mats = _manager.GetMatNames(_category);

            for (var i = 0; i < _matButtons.Count; i++)
            {
                var bttnTxt = _matButtons[i];
                var set = mats[i];
                if (set.Item1 != null)
                {
                    var bttnImage = _matButtonImages[i];
                    bttnImage.texture = set.Item1;
                }

                bttnTxt.text = set.Item2;
            }
        }
        
        public void SetMaterial(int index)
        {
            var mat = _manager.Materials.Find(i => i.category == _category);
            if (mat.materials != null)
            {
                if (_targetRenderer != null)
                {
                    _targetRenderer.sharedMaterial = mat.materials[index];
                }
            }
        }
    }
}