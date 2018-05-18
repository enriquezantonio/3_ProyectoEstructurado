/*-----------------------------------------------------------------------*/
/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 17/05/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion: Programa que simula una estructura de una persona        */
/*-----------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void estructuraAlumno(void);

struct Alumno
{
  char nombre[50];

  int edad;

  float peso;



};

int main(void)
{

  estructuraAlumno();

return 0;

}


void estructuraAlumno(void)
{
  struct Alumno noe;
  strcpy( noe.nombre, "ENRÍQUEZ ANTONIO NOÉ");

  noe.edad = 18;

  noe.peso = 50;
  printf("\n");

  printf("El nombre del alumno es: %s \n", noe.nombre );
  printf("Su edad es de: %i años \n", noe.edad );
  printf("Su peso es de: %.2f kilogramos \n", noe.peso );
}
