/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 15/04/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion:Imprimir matrices cuadradas, rectangulares y unidimensional*/


/* Declaracion de bibliotecas de cabecera */
#include <stdio.h>
#include <stdlib.h>

/* Implementacion del cuerpo del programa */
int main (void)

{
  int matriz0[4][4] = {{0}}, i, j;
    for(i = 0; i < 4; i++)
    {
      for(j = 0; j < 4;j++)
      {
      printf(" \n Introduzca el valor para la posicion (%d,%d) de la matriz cuadrada \n",i+1, j+1);
      scanf("%4d",&matriz0[i][j]);
      }
    }
printf(" Matriz cuadrada \n");
  for(i = 0; i < 4; i++)
    {
      printf("\n");
      for(j = 0; j < 4; j++)
        {
          printf("%4d",matriz0[i][j]);
        }
    }


printf("\n\n");


  int matriz1[3][4] = {{0}}, k, l;
    for(k = 0; k < 3; k++)
    {
      for(l = 0; l < 4; l++)
      {
      printf(" \n Introduzca el valor para la posicion (%d,%d) de la matriz rectangular \n",k+1, l+1);
      scanf("%4d",&matriz1[k][l]);
      }
    }
printf(" Matriz rectangular \n");
      for(k = 0; k < 3; k++)
        {
          printf("\n");
          for(l = 0; l < 4; l++)
            {
              printf("%4d",matriz1[k][l]);
            }
        }


printf("\n\n");


  int matriz2[1][4] = {{0}}, m, n;
    for(m = 0; m < 1; m++)
    {
      for(n = 0; n < 4; n++)
      {
      printf(" \n Introduzca el valor para la posicion (%d,%d) de la matriz unidimensional \n",m+1, n+1);
      scanf("%4d",&matriz2[m][n]);
      }
    }
printf(" Matriz unidimensional \n");
      for(m = 0; m < 1; m++)
        {
          printf("\n");
          for(n = 0; n < 4; n++)
            {
              printf("%d\n",matriz2[m][n]);
            }
        }

printf("\n\n");


return 0;
}
