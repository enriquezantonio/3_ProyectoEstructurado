/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 15/04/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion: Este programa ordena los numeros de manera ascendente    */


/* Declaracion de bibliotecas de cabecera */
#include<stdio.h>


/* Implementacion del cuerpo del programa */
int main(void)

{

  int array[10],j,i,auxiliar,arra[i],arr[j]   ;

  printf("Ingrese 9 numeros enteros \n");

    for (i=0;i<10;i++){
    scanf("%d", &array[i]);
  }

 printf("El orden ascendente de los numeros es el siguiente");
  for( i = 0; i<10; i++ ){
    for(int j= i+1; j<10; j++ ){
      if(array[i]> array[j]){
        auxiliar = array[j];
        array[j]=array[i];
        array[i]=auxiliar;
      }

        }

printf("\n %d",array[i]);

}

return 0;

}
