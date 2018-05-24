/*----------------------------------------------------------------*/
/* Autor: Noé Enríquez Antonio																	  */
/* E-mail: noeenrique1998@gmail.com                               */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: Implementacion de funciones que muestran datos en */
/*              pantalla.                                         */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipoFunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de lina con puts(). */

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nS I S T E M A     D E    R E G I S T R O    D E    C A N I N O S" _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Registro de caninos");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de caninos");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de caninos Acendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de caninos Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar Canino");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar Canino");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar Canino");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}

void mostrarEncabezadoTabla(void){
  printf(_TROJO     _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\tSEXO\t|     EDAD      |      COLOR     |", "NOMBRE", "RAZA", "FECHA NACIMIENTO");
  printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
}

void mostrarCanino(Canino canino)
{
  printf(_TBLANCO _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\t%c\t|\t%2.2d\t|\t%2.2c\t|", canino.nombre, canino.raza, canino.fechaNacimiento, canino.sexo, canino.edad, canino.color);
}

void detenerPantalla(void)
{
  char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
  printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
  {}
}
