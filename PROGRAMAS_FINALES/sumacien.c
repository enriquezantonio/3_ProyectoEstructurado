/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail: noeenriquez1998@gmail.com                                           */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion:17/05/2018                                            */
/*Descripcion: Programa que calcula la suma de los 100 primero numeros.       */
/*----------------------------------------------------------------------------*/

#include <stdio.h>		

void sumaCien(void);

int main (void)			
{

	sumaCien();	
						
	return 0;									
}



void sumaCien(void)
{

int  a,sum;								

printf ("Programa que realiza la suma de los 100 primeros numeros\n");	
		
for (a=1; a<=100; a++)							
{	
	sum=sum+a;								
		
}
		
	printf("El total de la suma es: %d\n",sum);

}
