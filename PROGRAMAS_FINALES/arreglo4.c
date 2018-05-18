/*-----------------------------------------------------------------------*/
/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 17/05/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion:Programa que permite encontrar un numero mayor            */
/*-----------------------------------------------------------------------*/

#include<stdio.h>

void imprimirMayor(void);

int main(void)
{
  imprimirMayor();

  return 0;
}



void imprimirMayor(void)
{
  int may=0, i;

  int arre[10] = {8,6,4,11,10,3,1,9,7,5};

   for(i = 0; i<10; i++)
   {
     if(arre[i] > may)
     {
       may = arre[i];
     }
   }

   printf("El numero mayor de los datos ingresados es :%d", may);

   printf("\n");
}
