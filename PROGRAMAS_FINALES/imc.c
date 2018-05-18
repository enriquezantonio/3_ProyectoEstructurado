/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail:noeenriquez1998@gmail.com                                            */
/*Fecha de creacion: 16/04/2018                                               */
/*Fecha de modificacion: 17/04/2018                                           */
/*Descripcion: Programa que calcula el indice de masa corporal de una persona */
/*----------------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

void IMC (void);

int main (void)
{
  IMC();

	return 0;
}



void IMC(void)
{
  float peso,IMC,altura;

  printf("Este programa calcula el IMC de una persona. \n\n");

  printf("Escriba su peso en kilos:\n");

  scanf("%f",&peso);

  printf("Escriba su altura en metros:\n");

  scanf("%f",&altura);

  IMC=peso/(pow(altura,2));

  printf("Tú IMC es: %.2f\n",IMC);
}
