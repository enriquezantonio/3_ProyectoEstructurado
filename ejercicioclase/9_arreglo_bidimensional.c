/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 27/04/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion:                                                          */


/* Declaracion de bibliotecas de cabecera */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Definicion de constantes*/
#define ROW 3 /** Número de filas de la matriz */
#define COL 3 /* Número de columnas de la matriz */
#define MAX 1000 /* Rango superior de los datos aleatarios */

int main(void)
{

  int array[ROW][COL];
  srand((unsigned) time( NULL));

  /* Inicializar del array con valores enteros aleatarios 1 - 100 */
  for (int i = 0; i < ROW; i++)/* Ciclos que controla las filas del array */
  {
    for (int j = 0; j < COL; j++)/* Ciclo que controla las columnas */
    {
      /* Asignacion de datos al array */
      /* Utilizar la funcion scanf() para solicitar datos al usuario */

      /* Utilizar la funcion array para obtener datos de forma aleatoria */
      /* La funcion se encuentra definida dentro de la biblioteca stdlib.h */
      array[i][j] = rand() % (MAX+1);
    }

  }


  printf("\x1b[32m Datos aleatorios de la matriz: arrray[%d][%d]\n",ROW,COL);
  printf("\x1b[42m Otro mensaje \n");
  printf("\x1b[0m Otro mensaje \n");

  for (int i = 0; i < ROW; i++)/* Ciclos que controla las filas del array */
  {
    printf("{");
    for (int j = 0; j < COL; j++)/* Ciclo que controla las columnas */
    {
      printf("%d ", array[i][j]);
    }
    printf("}\n");
  }

  return 0;

}
