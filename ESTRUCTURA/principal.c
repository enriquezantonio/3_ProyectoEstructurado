/*----------------------------------------------------------------*/
/* Autor: Noé Enríquez Antonio																	  */
/* E-mail: noeenrique1998@gmail.com                               */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: Programa para ejemplificar archivos .h y .c       */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                   /* En este archivo se definen las secuencia para los colres            */
#include "enums.h"                     /* En este archivo se definen los enums para los menus                 */
#include "prototipoFunciones.h"        /* En este archivo se definen todos los prototipos de funciones        */

                                       /* Los #define estan en el archivo prototipofunciones.h                */

int numCanino;                        /* Variable global: se define aqui en el main, pero se utiliza,        */
                                       /* manteniendo su valor en operacionesCanino.c y ordenacion.c          */

int main(void)
{
  Canino listaCanino[TOTAL_CANINO];    /* Declaracion de una variable de arreglo de estructura alumno[]       */
	int opcion;                          /* Variable que ontrola las opciones del menu principal.               */

	do{
    menuPrincipal();                   /* Se llama (invoca) a la funcion menuPrincipal() implementada en      */
                                       /* operacionespantalla.c                                               */

		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case CREAR:
              while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
              printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     C A N I N O S\n\n");

              printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero del canino: " _TVERDE);
							scanf("%d",&numCanino);
							printf("\n\n" _ARESET);

							for(int i = 0; i < numCanino; i++)
							{
                while(getchar() != '\n');              /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
                listaCanino[i] = crearCanino();   /* Se invoca a la funcion crearCanino() implementada en operacionesAlumno.c  */
              }
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR:
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    C A N I N O S\n\n");
              mostrarListaCanino(listaCanino, 0);      /* Se invoca a la funcion mostrarCanino() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_ASC:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    A S C E D E N T E\n\n");
              mostrarListaCanino(listaCanino, 1);      /* Se invoca a la funcion mostrarCanino() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_DES:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    D E S C E D E N T E\n\n");
              mostrarListaCanino(listaCanino, 2);      /* Se invoca a la funcion mostrarCanino() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case BUSCAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
						  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
              buscarCanino(listaCanino);               /* Se invoca a la funcion buscarCanino() implementada en operacionesAlumno.c      */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ACTUALIZAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");
              actualizarCanino(listaCanino);           /* Se invoca a la funcion actualizarCanino() implementada en operacionesAlumno.c  */
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ELIMINAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R\n\n");
              eliminarCanino(listaCanino);             /* Se invoca a la funcion eliminarCanino() implementada en operacionesAlumno.c    */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case SALIR:
							system("clear");                         /* Antes de terminar la ejecucion del programa, limpia la pantalla */
							exit(0);                                 /* Termina la ejecucion del programa                               */
		}
	}while(opcion != SALIR);

	return 0;
}
