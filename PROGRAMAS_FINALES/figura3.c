/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail: noeenriquez1998@gmail.com                                           */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion:                                                      */
/*Descripcion:Programa que mostrara una figura geometrica                     */
/*----------------------------------------------------------------------------*/


#include <stdio.h>
#define TAMGIF 9

void  figuraContornoX(int tamanio);
int main (void)
{
  figuraContornoX(TAMGIF);
  return 0;
}

void figuraContornoX(int tamanio)
{
  for (int i=0; i<tamanio; i++)
  {
    for(int j=0; j<tamanio;j++)
    {
      if((i==0|| i ==j)|| j == 0 || j==(tamanio-1))
      {
      printf("*");
      }else if(j ==((tamanio-1)-i)||i==(tamanio-1)){
      printf("*");
      }else{
	printf(" ");
    }
}
    printf("\n");
   }
}
