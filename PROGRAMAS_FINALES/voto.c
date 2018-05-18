/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail: noeenriquez1998@gmail.com                                           */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion:                                                      */
/*Descripcion:Programa que indica tu disponibilidad vot dependiendo detu edad */
/*----------------------------------------------------------------------------*/

#include <stdio.h>			
	
void aceptarVoto(void);

int main (void)				



{
	aceptarVoto();

			
		return 0;						
}



void aceptarVoto(void)
{
   int edad;										
	
	printf("Programa que determina si una persona puede votar con base a su edad.\n");	
	
	printf("Inserte su edad.\n");								
	
	scanf("%d", &edad);									
	
	if (edad >=18)										
	
	{
	
	printf ("Usted puede votar.\n");	
	
	}
	
	else	
	
	printf("Usted no puede votar.\n");
}
