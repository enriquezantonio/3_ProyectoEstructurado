/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail: noeenriquez1998@gmail.com                                           */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion:                                                      */
/*Descripcion: Programa que muestra la tabla de multiplicar del 1 al 5        */
/*----------------------------------------------------------------------------*/

#include <stdio.h>

void cincoTablas(void);

int main (void)
{
	cincoTablas();

	return 0;
}



void cincoTablas(void)
{
	int num=0,cont;

	printf("Programa que muestra la tabla de multiplicar del 1 al 5.\n");

	while (num++<5)

		for(cont = 0; cont <= num; cont++)
	  	{
				for(cont = 0;cont <= 10;cont++)
			  {
					printf("\n%d x %d = %d\t", num, cont,(num * cont));
				}
				  printf("\n\n");
			}
 }
