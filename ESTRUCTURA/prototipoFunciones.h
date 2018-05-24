/*----------------------------------------------------------------*/
/* Autor: Noé Enríquez Antonio																	  */
/* E-mail: noeenrique1998@gmail.com                               */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: Definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_CAN      50        /* Definicion del tamanio del arreglo unidimensional */
#define TAM_RAZ      12        /* Tamanio de la raza del perro                      */
#define TAM_FECHA    12        /* Tamanio de la fecha de nacimiento                 */
#define TOTAL_CANINO 10        /* Tamanio total de canino                           */
#define COLOR        10
#define COL          10

/* Se define una estructura para modelar los datos de una alumno. */
/* Los miembros de la estructura son:                             */
/*                                    - nombre                    */
/*                                    - raza                      */
/*                                    - fechaNacimiento           */
/*                                    - sexo                      */
/*                                    - color                     */
/*                                    - edad                      */
typedef struct
{
	char nombre[TAM_CAN];
	char raza[TAM_RAZ];
	char fechaNacimiento[TAM_FECHA];
	char sexo;
	char color[COL];
	int edad;
}Canino;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarCanino(Canino);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de caninos */
Canino crearCanino(void);
void mostrarListaCanino(Canino [], int);
void buscarCanino(Canino []);
void actualizarCanino(Canino []);
void eliminarCanino(Canino []);


/* Funcion que permite eliminar un canino, es invocada por la funcion eliminarCanino() */
Canino * eliminarUnCanino(Canino [], int);


/* Funciones que permiten ordenar los datos de los caninos */
int * ordenarAscendente(Canino [], int []);
int * ordenarDescendente(Canino [], int []);


#endif
