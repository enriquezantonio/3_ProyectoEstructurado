/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail: noeenriquez1998@gmail.com                                           */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion:                                                      */
/*Descripcion:Programa que mostrara una figura geometrica                     */
/*----------------------------------------------------------------------------*/

#include <stdio.h>
#define TAMGIF 9



void  figuraContornoX(void);

int main (void)
{
  figuraContornoX();
  
  return 0;
}



void figuraContornoX(void)
{
  for (int i=0; i<tamanio; i++)
  {
    for(int j=0; j<tamanio;j++)
    {
      if((i==0|| i ==j))
      {
      printf("*");
      }else if(((tamanio-1))){
      printf("*");
      }else{
	printf(" ");
    }
}
    printf("\n");
   }
}
