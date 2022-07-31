using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlaneMatManager : MonoBehaviour
{
    public Material planeMat;
    public Button[] planeTextButtons;
    // Start is called before the first frame update
    void Awake()
    {
        foreach(var b in planeTextButtons)
        {
            Texture tex = b.transform.Find("RawImage").GetComponent<RawImage>().texture;
            b.onClick.AddListener(() => OnClickButton(tex));
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnClickButton(Texture tex)
    {
        planeMat.mainTexture = tex;

    }
}
