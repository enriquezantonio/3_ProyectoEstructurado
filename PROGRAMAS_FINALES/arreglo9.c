/*-----------------------------------------------------------------------*/
/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 17/05/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion:  Programa que simula una estructura de un libro          */
/*-----------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void estructuraLibro(void);

struct Libro
{
  char Titulo[50];

  char Autor[50];

  int Pagina;



};

int main(void)
{

  estructuraLibro();

return 0;

}


void estructuraLibro(void)
{
  struct Libro leer;
  strcpy( leer.Titulo, "Cien años de Soledad");

  strcpy(leer.Autor, "Gabriel García Márquez");

  leer.Pagina = 500;
  printf("\n");

  printf("El titulo del libro es: %s \n", leer.Titulo );
  printf("Su Autor es: %s \n", leer.Autor );
  printf("El numero de paginas es de: %.2d \n", leer.Pagina );
}
