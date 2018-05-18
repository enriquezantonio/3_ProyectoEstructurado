/*-----------------------------------------------------------------------*/
/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 17/05/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion:Programa que permite convertir de mayusculas a minusculas */
/*-----------------------------------------------------------------------*/

#include <stdio.h>

void imprimirMinusculas(void);

#define TAM 10

int main(void)

{
  imprimirMinusculas();


  return 0;
}



void imprimirMinusculas(void)
{

  char c;
  char arre[TAM];


  int index=0;

  printf("Ingrese alguna frase en mayusculas \n");

  while((c = getchar()) != '\n')
  {
    if(c>= 65 && c<=90)
    {
      c = c+32;
      arre[index] = c;
      index++;
    }
  }

  printf("\n");

  for (int j = 0; j < TAM; j++)
  {
    printf("%c", arre[j]);
  }

  printf("\n");

}
