/*-----------------------------------------------------------------------*/
/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 17/05/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion: Programa que permite convertir de minusculas a mayusculas*/
/*-----------------------------------------------------------------------*/

#include <stdio.h>

void imprimirMayusculas(void);

#define TAM 10

int main (void)

{

 imprimirMayusculas();

  return 0;
}



void imprimirMayusculas(void)
{
  char c;

  char array[TAM];

  int index=0;

  printf("Ingrese alguna frase en menusculas \n");

    while((c = getchar()) != '\n')
    {
      if(c>= 97 && c<=122)
      {
        c = c-32;
        array[index] = c;
        index++;
      }
    }

  printf("\n");

  for (int i = 0; i < TAM; i++)
  {
    printf("%c", array[i]);
  }

  printf("\n");
}
