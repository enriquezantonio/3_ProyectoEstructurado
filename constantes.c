/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 11/04/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion:Declaracicon de constantes con #define y cons y que los   */
/* imprima en pantalla, asi mismodefinir 6 macros que simulen operaciones*/
/* También se simulan los ciclos for, while y do-while                   */


/* Declaracion de bibliotecas de cabecera */
#include<stdio.h>

/* DECLARACION  DE CONSTANTES */
/* No se reservan espacios en la memoria */
#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN 0
#define MAX 100


/* Implementacion de macros */
#define SUMA(X, Y) X+Y
#define RESTA(X, Y) X-Y
#define MULTI(X, Y) X*Y
#define DIV(X, Y) X/Y
#define POTCUADRADO(X) X*X
#define POTCUBO(X) X*X*X

#define CICLOFOR(X, Y) for(X=0; X<Y; X++)
#define CICLOWHILE(X,Y) while(X<Y)
#define CICLODOWHILE(X,Y) dowhile(X<Y)


/* Implementacion del cuerpo del programa */
int main(void)
{

/* Definir ciclo con macros */
#define CICLOFOR(X, Y) for(X=0; X<Y; X++)
#define CICLOWHILE(X,Y) while(X<Y)
#define CICLODOWHILE(X,Y) dowhile(X<Y)



/*  DECLARACION DE CONSTANTES CON CONST */
/* Se reservan espacios en la memoria */
const float pi = 3.1416;
const float g = 9.81;
const int tamanio = 10;
const int min = 0;
const int max = 100;




  /* Imprimir constante define */
  printf("\n El valor de PI es: %f \t", PI);
  /* Imprimir constante define */
  printf("\n El valor de la G es de: %f \n", G);
  /* Imprimir constante define */
  printf("\n El valor de TAMAÑO ES DE: %d \n", TAMANIO);
  /* Imprimir constante define */
  printf("\n El valor de MIN es de: %d \n", MIN);
  /* Imprimir constante define */
  printf("\n El valor de MAX es de: %d \n", MAX);




  /* Imprimir constante const */
  printf("\n El valor de PI es: %f \n", pi);
  /* Imprimir constante const */
  printf("\n El valor de la G es de: %f \n", g);
  /* Imprimir constante const */
  printf("\n El valor de TAMAÑO ES DE: %d \n", tamanio);
  /* Imprimir constante const */
  printf("\n El valor de MIN es de: %d \n", min);
  /* Imprimir constante const */
  printf("\n El valor de MAX es de: %d \n", max);






  /* Imprimir macros */
  printf("\n El resultado de la SUMA es de: %d \n", SUMA(3,4));

  printf("\n El resultado de la RESTA es de: %d \n", RESTA(10,5));

  printf("\n El resultado de la MULTIPLICACION es de: %d \n", MULTI(10,5));

  printf("\n El resultado de la DIVISION es de: %d \n", DIV(50,10));

  printf("\n El resultado de la POTENCIA AL CUADRADO es de: %d \n", POTCUADRADO(5));

  printf("\n El resultado de la POTENCIA AL CUBO es de: %d \n", POTCUBO(5));


  /*Utilizando las macros de ciclo FOR */
  int 4;
  int 8;
  CICLOFOR(X, Y)
  {
    printf("\n HOLA MUNDO...\n" );
}

  /*Utilizando las macros de ciclo WHILE */
  int 4;
  int 8;
  CICLOWHILE(X,Y)
  {
    printf("\n HOLA MUNDO...\n");

}

  /*Utilizando las macros de ciclo DOWHILE */
  int 4;
  int 8;
  CICLODOWHILE (X,Y)
  {
    printf("\n HOLA MUNDO...\n");
}

  return 0;


}
