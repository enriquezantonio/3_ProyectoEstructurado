/*----------------------------------------------------------------*/
/* Autor: Noé Enríquez Antonio																	  */
/* E-mail: noeenrique1998@gmail.com                               */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: Implementacion de las funciones de ordenacion.    */
/*----------------------------------------------------------------*/

#include <string.h>
#include "prototipoFunciones.h"

extern int numCanino;

int * ordenarAscendente(Canino listaCanino[], int arrayTemp[])
{
  for(int i = 0; i < numCanino; i++)
  {
    for(int j = i + 1; j < numCanino; j++)
    {
      if(strcmp(listaCanino[arrayTemp[i]].nombre, listaCanino[arrayTemp[j]].nombre) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Canino listaCanino[], int arrayTemp[])
{
  for(int i = 0; i < numCanino; i++)
  {
    for(int j = i + 1; j < numCanino; j++)
    {
      if(strcmp(listaCanino[arrayTemp[i]].nombre, listaCanino[arrayTemp[j]].nombre) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
 
