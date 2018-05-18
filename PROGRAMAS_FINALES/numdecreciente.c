/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail: noeenriquez1998@gmail.com                                           */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion:17/05/2018                                            */
/*Descripcion: Programa que muestra los numeros del 1 al 100.                 */
/*----------------------------------------------------------------------------*/

#include <stdio.h>		

void mostarNumeros(void);

int main (void)			


{
	mostrarNumeros();						
		
			
	return	0;							 															
	
}



void mostrarNumeros(void)
{
	int num=100;							
		printf("Programa que muestra los numeros de 100 al 0.\n"); 	
 		do  								
		 {
		 printf("%d\n",num);						
		 }
		while(--num >-1);
}
