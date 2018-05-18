/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail: noeenriquez1998@gmail.com                                           */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion:                                                      */
/*Descripcion: Programa que muestra la tabla de multiplicar del 1             */
/*----------------------------------------------------------------------------*/

#include <stdio.h>

void tablaUno(void);

int main (void)

{
	tablaUno();

	return 0;
}



void tablaUno(void)
{
	int num=1,cont;

	printf("Programa que muestra la tabla de multiplicar del 1.\n\n");

		for(cont = 0; cont <= num; cont++)
	{
		for(cont = 0;cont <= 10;cont++)
	{
		printf("%d x %d = %d\n", num, cont,(num * cont));
	}
		printf("\n\n");
	}
}
