/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 15/04/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion: Covertir de dacimal a binario y viceversa                */


/* Declaracion de bibliotecas de cabecera */
#include <stdio.h>
#include <math.h>

/* Implementacion del cuerpo del programa */
int main (void)

{
  int x, y, res , num;
  int binario[0];

  printf(" Ingrese alguna cantidad \n");
    scanf("%d", &num);

    for(x = 0; x<100; x++)
    {
      binario[x] = num%2;
      num = num/2;
      if(num == 0)
      break;
    }
    printf(" El codigo binario del numero ingresado es de: \n");
          for(y=x; y>=0; y--)
          {
            printf("%d",binario[y]);
          }

    printf("\n\n\n");


  int a, b, bin;
  int decimal[0];
  int suma = 0;
  int y1 = 0;

  printf(" Ingrese el codigo binario que desea convertir a decimal \n");
    for(a = 0; a < x+1; a++)
    {
      scanf("%d", &decimal[a]);
    }


      for(b = a-1; b >= 0; b--)
      {
        if(decimal[b] == 1)
        {
          suma += pow(2, y1);
        }
      y1++;
      }
      printf(" El numero decimal del numero binario ingresado es de: \n");
      printf("%d\n",suma);



return 0;

}
