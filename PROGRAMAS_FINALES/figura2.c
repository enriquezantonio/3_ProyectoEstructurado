/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail: noeenriquez1998@gmail.com                                           */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion:                                                      */
/*Descripcion:Programa que mostrara una figura geometrica                     */
/*----------------------------------------------------------------------------*/

#include <stdio.h>
#define TAMGIF 9

void  figuraLlena(int tamanio);
int main (void)
{
  figuraLlena(TAMGIF);
  
  return 0;
}

void FiguraLlena(int tamanio)
{
  for (int i=0; i<tamanio; i++)
  {
    for(int j=0; j<tamanio;j++)
    {
      if(i==0|| j == 0 || j==(tamanio-1))
     {
      printf("*");
      }else if(i==(tamanio-1)){
      printf("*");
      }else{
      printf(" ");
      }
    }
    printf("\n");
   }
}
