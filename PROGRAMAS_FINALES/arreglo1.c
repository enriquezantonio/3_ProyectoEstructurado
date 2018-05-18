/*-----------------------------------------------------------------------*/
/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 17/05/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion: Programa que permite copiar los datos de un arreglo      */
/*-----------------------------------------------------------------------*/

#include <stdio.h>

void imprimirArreglo(void);

#define TAM 10

int main (void)

{
  imprimirArreglo();


  return 0;
}



void imprimirArreglo(void)
{
  int i;

  float  array1[TAM], array[TAM] = {2.3, 5.1, 7.3, 5.8, 9.2, 2.5, 6.3, 5.5, 9.9, 6.6};

  printf("Arreglo numero 1\n");

  for(i = 0; i<10 ; i++)
  {
    printf("%.1f\t",array[i]);
  }

  printf("\nArreglo numero 2(copia)\n");

  for(i = 0; i<10; i++)
  {

    array1[i] = array[i];

    printf("%.1f\t",array1[i]);

  }

}
