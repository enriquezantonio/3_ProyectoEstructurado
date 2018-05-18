/*-----------------------------------------------------------------------*/
/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 17/05/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion: Programa que te permite simular un menu                  */
/*-----------------------------------------------------------------------*/

#include<stdio.h>

void opcionMenu(void);

int main(void)
{
  opcionMenu();

  return 0;
}



void opcionMenu(void)
{
  int opcion;
  enum{Ingresar=1,
      Mostrar,
      Actualizar,
      Eliminar,
      Salir};
      printf("Menu Principa\n");

      printf("1:Ingresar\n");
      printf("2:Mostrar\n");
      printf("3:Actualizar\n");
      printf("4:Eliminar\n");
      printf("5:Salir\n");

      printf("Seleccione una opcion que desee realizar\n");
      scanf("%d",&opcion);
switch (opcion)
  {
      case 1:
      printf("Usted se encuentra en la opción Ingresar\n");
      break;

      case 2:
      printf("Usted se encuentra en la opción Mostrar\n");
      break;

      case 3:
      printf("Usted se encuentra en la opción Actualizar\n");
      break;

      case 4:
      printf("Usted se encuentra en la opción Eliminar\n");
      break;

      case 5:
      printf("Usted se encuentra en la opción salir\n");
      break;


  }
}
