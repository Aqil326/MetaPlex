using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ThreePupperStudios.PaintMaterials
{
    internal class MatManager : MonoBehaviour
    {
        [SerializeField]
        private Renderer _walls;

        public Renderer Walls => _walls;

        [SerializeField]
        private Renderer _ceiling;

        public Renderer Ceiling => _ceiling;

        [SerializeField]
        private Renderer _accentWall;

        public Renderer AccentWall => _accentWall;

        [SerializeField]
        private Renderer _secondaryAccent;

        public Renderer SecondaryAccent => _secondaryAccent;

        [SerializeField]
        private List<MatSet> _matSets;

        public List<MatSet> Materials => _matSets;

        public void SetMaterial(Renderer rend, Material mat)
        {
            var materials = new[] {mat};
            rend.sharedMaterials = materials;
        }

        internal List<Tuple<Texture2D, string>> GetMatNames(Category category)
        {
            var names = new List<Tuple<Texture2D, string>>();

            var set = _matSets.Find(i => i.category == category);
            if (set.materials != null)
            {
                foreach (var mat in set.materials)
                {
                    Texture2D texture = null;
#if UNITY_EDITOR
                    texture = UnityEditor.AssetPreview.GetAssetPreview(mat);
#endif
                    names.Add(new Tuple<Texture2D, string>(texture, mat.name));
                }
            }

            return names;
        }

        [System.Serializable]
        internal struct MatSet
        {
            public Category category;
            public List<Material> materials;
        }
    }


    internal enum Category
    {
        Cartagena,
        Glossy,
        Marble,
        Matte,
        Metallic,
        Daupe,
        Satin,
        Spotted,
        ThickStrokes,
        Varnished
    }
}