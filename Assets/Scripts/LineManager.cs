using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit.AR;
using TMPro; 

public class LineManager : MonoBehaviour
{

    public LineRenderer lineRenderer;
    public ARPlacementInteractable placementInteractable;
    public TextMeshPro mText;

    // Start is called before the first frame update
    void Start()
    {
        placementInteractable.objectPlaced.AddListener(DrawLine);
    }

    void DrawLine(ARObjectPlacementEventArgs args)
    {
        lineRenderer.positionCount++;
        lineRenderer.SetPosition(lineRenderer.positionCount-1,args.placementObject.transform.position); 
        if(lineRenderer.positionCount >1)
        {
            Vector3 pointA = lineRenderer.GetPosition(lineRenderer.positionCount -1);
            Vector3 pointB = lineRenderer.GetPosition(lineRenderer.positionCount -2);
            float dist = Vector3.Distance(pointA,pointB);

            TextMeshPro distText = Instantiate(mText);
            distText.text =""+ dist;

            Vector3 directionVector = (pointB - pointA);
            Vector3 normal = args.placementObject.transform.up;

            Vector3 upd = Vector3.Cross(directionVector, normal).normalized;    
            Quaternion rotation  = Quaternion.LookRotation(-normal , upd);

            distText.transform.rotation = rotation;
            distText.transform.position = (pointA +directionVector * 0.5f) + upd*0.2f;
        }
    }
}
