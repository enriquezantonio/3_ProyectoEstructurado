/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail:noeenriquez1998@gmail.com                                            */
/*Fecha de creacion: 16/04/2018                                               */
/*Fecha de modificacion: 17/04/2018                                           */
/*Descripcion:Programa que permite ver la capacida de agua segun sus medidas  */
/*----------------------------------------------------------------------------*/

#include <stdio.h>

void volumenLitro(void);

int main(void)
{
	volumenLitro();

	return 0;
}



void volumenLitro(void)
{

float A, L, N, CM, V, PAG, Litros;

printf(" Ingrse la altura de la alberca en metros \n");

  scanf("%f",&A);

printf(" Ingrese el largo de la alberca en metros \n");

  scanf("%f",&L);

printf(" Ingrese el ancho de la alberca en metros \n");

  scanf("%f",&N);

  V = A*L*N;

	Litros = V * 1000;

printf(" La cantidad de Litros que ocupa la alberca es de : %.2f Litros \n", Litros);

}
