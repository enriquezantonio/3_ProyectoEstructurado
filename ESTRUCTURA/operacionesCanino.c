/*----------------------------------------------------------------*/
/* Autor: Noé Enríquez Antonio																	  */
/* E-mail: noeenrique1998@gmail.com                               */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: Implementacion de funciones sobre la estructura   */
/*              canino: crear, listar, ordenar, buscar,           */
/*              actualizar y eliminar.                            */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

/* Se incluyen los archivos necesarios */
#include "colores.h"
#include "prototipoFunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int numCanino;



Canino crearCanino(void)
{
  Canino canino;

  printf(_TBLANCO _NEGRITA "Introduce el nombre del canino: "              _NNEGRITA _TVERDE);
  fgets(canino.nombre, TAM_CAN, stdin);                                    /* Solicita el nombre del canino al usuario          */
  strcpy(canino.nombre, strtok(canino.nombre, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce la raza del canino: "           _NNEGRITA _TVERDE);
  fgets(canino.raza, TAM_RAZ, stdin);                                 /* Solicita la raza del canino al usuario        */
  strcpy(canino.raza, strtok(canino.raza, "\n"));             /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce la fecha de nacimiento del canino: " _NNEGRITA _TVERDE);
  fgets(canino.fechaNacimiento, TAM_FECHA, stdin);                         /* Solicita la fecha de nacimiento al usuario        */
  strcpy(canino.fechaNacimiento, strtok(canino.fechaNacimiento, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduce el sexo del canino: "                _NNEGRITA _TVERDE);
  scanf("%c", &canino.sexo);

  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

  printf(_TBLANCO _NEGRITA "Introduce el color del canino: "            _NNEGRITA _TVERDE);
  fgets(canino.color, COL, stdin);

  printf(_TBLANCO _NEGRITA "Introduce la edad del canino: "                _NNEGRITA _TVERDE);
  scanf("%d", &canino.edad);
  printf("\n\n");

  return canino;
}




void mostrarListaCanino(Canino listaCanino[], int ordenar)
{
  int arrayTemp[numCanino];
  for(int i = 0; i < numCanino; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)            /* 1: ordenacion ascendente  */
  {
    memcpy(arrayTemp, ordenarAscendente(listaCanino, arrayTemp), sizeof(arrayTemp));   /* memcpy: permite compiar un arreglo a otro */
  } else if(ordenar == 2){    /* 2: ordenacion descendente */
    memcpy(arrayTemp, ordenarDescendente(listaCanino, arrayTemp), sizeof(arrayTemp));  /* memcpy: permite compiar un arreglo a otro */
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < numCanino; i++)
  {
    mostrarCanino(listaCanino[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarCanino(Canino listaCanino[])
{
  int opcionBuscar;
  char nombreBuscar[TAM_CAN];            /* Almacena el nombre a buscar dentro de la estructura                */
	char razaBuscar[TAM_RAZ];         /* Almacena la raza a buscar dentro de la estructura             */

  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
  printf(_TCYAN     _NEGRITA "Buscar canino por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "\t2. Raza \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
    case _xNombre:
        while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */

        printf(_TCYAN _NEGRITA "\n\nIngrese el nombre del canino: ");
        fgets(nombreBuscar, TAM_CAN, stdin);
        strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

        for(int i = 0; i < numCanino; i++)
            if(strcmp(nombreBuscar, listaCanino[i].nombre) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarCanino(listaCanino[i]);
            }
            break;

      case _xRaza:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la raza: ");
          fgets(razaBuscar, TAM_RAZ, stdin);
          strcpy(razaBuscar, strtok(razaBuscar, "\n"));

          for(int i = 0; i < numCanino; i++)
          if(strcmp(razaBuscar, listaCanino[i].raza) == 0)
          {
            mostrarEncabezadoTabla();
            mostrarCanino(listaCanino[i]);
          }
          break;
  }
}



void actualizarCanino(Canino listaCanino[])
{
  int opcionBuscar;
  char nombreBuscar[TAM_CAN];            /* Almacena el nombre a buscar dentro de la estructura                */
	char razaBuscar[TAM_RAZ];         /* Almacena la raza a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Buscar canino a actualizar por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "\t2. Raza \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xNombre:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre: ");
          fgets(nombreBuscar, TAM_CAN, stdin);
          strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

          for(int i = 0; i < numCanino; i++)
          {
              if(strcmp(nombreBuscar, listaCanino[i].nombre) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarCanino(listaCanino[i]);

                  printf("\n\n");

                  listaCanino[i] = crearCanino();

                  mostrarEncabezadoTabla();
                  mostrarCanino(listaCanino[i]);

                  break;
              }
          }
          break;

      case _xRaza:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la raza: ");
          fgets(razaBuscar, 50, stdin);
          strcpy(razaBuscar, strtok(razaBuscar, "\n"));

          for(int i = 0; i < numCanino; i++)
          {
              if(strcmp(razaBuscar, listaCanino[i].raza) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarCanino(listaCanino[i]);

                  printf("\n\n");

                  listaCanino[i] = crearCanino();

                  mostrarEncabezadoTabla();
                  mostrarCanino(listaCanino[i]);

                  break;
              }
          }

          break;
  }
}



void eliminarCanino(Canino listaCanino[])
{
  int opcionBuscar;
  char nombreBuscar[TAM_CAN];            /* Almacena el nombre a buscar dentro de la estructura                */
	char razaBuscar[TAM_RAZ];         /* Almacena la raza a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Eliminar canino por:\n\n");
  printf(_TBLANCO   _NEGRITA "1. Nombre\n");
  printf(_TBLANCO   _NEGRITA "2. Raza \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xNombre:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre: ");
          fgets(nombreBuscar, TAM_CAN, stdin);
          strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

          for(int i = 0; i < numCanino; i++)
          {
                if(strcmp(razaBuscar, listaCanino[ i].nombre) == 0)
                {
                  mostrarEncabezadoTabla();
                  mostrarCanino(listaCanino[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      printf("\nSizeof: %lu\n", sizeof(* listaCanino));
                      listaCanino = eliminarUnCanino(listaCanino, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
          break;

      case _xRaza:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la raza: ");
          fgets(razaBuscar, TAM_CAN, stdin);
          strcpy(razaBuscar, strtok(razaBuscar, "\n"));

          for(int i = 0; i < numCanino; i++)
          {
              if(strcmp(razaBuscar, listaCanino[i].raza) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarCanino(listaCanino[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      listaCanino = eliminarUnCanino(listaCanino, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
  }
}



Canino *eliminarUnCanino(Canino listaCanino[], int lugar)
{
  if(lugar < (numCanino - 1))
  {
    for(int j = lugar; j < numCanino-1; j++)
    {
      strcpy(listaCanino[j].nombre,          listaCanino[j+1].nombre);
      strcpy(listaCanino[j].raza,       listaCanino[j+1].raza);
      strcpy(listaCanino[j].fechaNacimiento, listaCanino[j+1].fechaNacimiento);
      listaCanino[j].sexo     = listaCanino[j+1].sexo;
      strcpy(listaCanino[j].color,  listaCanino[j+1].color);
      listaCanino[j].edad     = listaCanino[j+1].edad;
    }
  }

  strcpy(listaCanino[numCanino-1].nombre,          "");
  strcpy(listaCanino[numCanino-1].raza,       "");
  strcpy(listaCanino[numCanino-1].fechaNacimiento, "");
  listaCanino[numCanino-1].sexo     = '\0';
  strcpy(listaCanino[numCanino-1].color,       "");
  listaCanino[numCanino-1].edad     = -1;

  numCanino--;

  printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

  return listaCanino;
}
