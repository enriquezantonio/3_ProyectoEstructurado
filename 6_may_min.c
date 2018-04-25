/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 15/04/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion: convertir de minusculas a mayusculas y viceversa         */


/* Declaracion de bibliotecas de cabecera */
#include <stdio.h>

const int tamanio = 15; /*Definir una constante*/

/* Implementacion del cuerpo del programa */
int main (void)
{
  char c;
  char array[tamanio];
  char arre[tamanio];


  int index=0;

printf("Ingrese alguna frase en menusculas \n");
  while((c = getchar()) != '\n')/* Leer caracter por caracter */
  {
    if(c>= 97 && c<=122) /* Validando unicamente caracteres: letras minusculas*/
    {
      c = c-32;
      array[index] = c;
      index++;
    }
  }

  printf("\n");
  for (int i = 0; i < tamanio; i++)
  {
    printf("%c", array[i]);
  }

  printf("\n");


printf("Ingrese alguna frase en mayusculas \n");
  while((c = getchar()) != '\n')/* Leer caracter por caracter */
  {
    if(c>= 65 && c<=90) /* Validando unicamente caracteres: letras minusculas*/
    {
      c = c+32;
      arre[index] = c;
      index++;
    }
  }

  printf("\n");
  for (int j = 0; j < tamanio; j++)
  {
    printf("%c", arre[j]);
  }

  printf("\n");


  return 0;
}
