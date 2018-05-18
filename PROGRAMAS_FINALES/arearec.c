/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail: noeenriquez1998@gmail.com                                           */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion:                                                      */
/*Descripcion: Programa que calcula el area de un rectangulo                  */
/*----------------------------------------------------------------------------*/

#include <stdio.h>

void areaRectangulo(void);

int main (void)

{
  areaRectangulo();

	return 0;
}



void areaRectangulo(void)
{

  float ancho, largo, area;

  printf("Escriba la medida del ancho del rectangulo\n");

  scanf("%f",&ancho );

  printf("Escriba la medida del largo del rectangulo\n");

  scanf("%f",& largo);

  area=ancho*largo;

  printf("El área total del recangulo es de: %.0f\n",area);
}
