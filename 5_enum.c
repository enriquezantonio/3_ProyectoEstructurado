/* Autor: Enríquez Antonio Noé                                           */
/* E-mail: noeenriquez1998@gmail.com                                     */
/* Fecha de creacion: 15/04/2018                                         */
/* Fecha de actualizacion:                                               */
/* Descripcion: Imprimir var1, var2, var3                                */


/* Declaracion de biblioteca de cabecer                                  */
#include <stdio.h>


/* Declaracion de enum */
/* Tipo de identificador{lista_de_identificadores}; */
enum DIAS{ L , M , MI , J , V , S , D};
enum MESES{EN = 1 , FE , MAR , AB , MAY , JUN , JUL , AG , SE , OC , NO , DI};
enum FRUTAS{ manzana , mango , durazno , pera , uva , pina};

enum PRECIOAUTO{ NUEVO = 10 , SEMINUEVO = -5 , USADO , INSERVIBLE};

enum {MATE , MATEDIS , MATII , TGS , ELECI }var1, var2, var3;

int main (void)
{
  printf("%d\n", USADO);
  printf("%d\n", var1 );
  printf("%d\n", var2 );
  printf("%d\n", var3 );

  for (enum MESES index = EN ; index <= DI; index++)
  {
    printf("%d", index);

    switch (index)
    {
        case EN:
          printf("\nEnero\n");
          break;
        case OC:
          printf("\nOctubre\n");
          break;
    }
    printf("%d", var1 );
  }





  return 0;
}
