using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ScreenManager : MonoBehaviour
{
   public void playARTiles()
   {
      SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
   }

   public void playARMeasure()
   {
      SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex +2);
   }

   public void playARFurniture()
   {
      SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex +3);
   }
}
