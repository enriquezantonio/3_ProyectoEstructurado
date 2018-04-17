/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 12/04/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion: este programa encuentra el numero menor en un arreglo    */
/*               unidimencional de dimension 1o de enteros.              */


/* Declaracion de bibliotecas de cabecera */
#include <stdio.h>


#define TAM 10 /* Declaracion de constante */


/* Implementacion del cuerpo del programa */
int main(void)
{
  int arreglo[TAM] = {7, 1, 2, 10, 5, 6, 4, 3, 9, 8}; /* Declaracion e inicializacion del arreglo */

  int menor = arreglo[0]; /* Se asigna a la variable mayor el primer elemento del arreglo */
  

  /* Se evalua cada una de las posiciones del arreglo para hallar el nÃºmero menor*/
  /* Se inicializa i con 1, para no evaluar la posicion 0. */
  
  for(int i = 1; i < TAM; i++)
  {
    if(menor > arreglo[i])
       menor = arreglo[i];
  }

  printf("El numero menor es: %d\n", menor);


  return 0;
}
