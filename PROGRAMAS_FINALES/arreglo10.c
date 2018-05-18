/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail: noeenriquez1998@gmail.com                                           */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion:                                                      */
/*Descripcion:Programa que realiza el conteo de acientos disponibles en un mircro*/
/*----------------------------------------------------------------------------*/


#include <stadio.h>
const ASIENTOS = 35;

void asientosDisponibles(void);

ind main <void>

{
  asientosDisponibles(); 
 
  return 0;

}



void asientosDisponibles(void)
{
  int lugar,i;
  int sillones[ASIENTOS];
  int boletosvendidos = 0;

  printf("==Terminal de Autobuses ADO==")
 
    for(i = 0; i < ASIENTOS; i++)
    {
      sillones[i] = 0;
    }

    while(boletosvendidos < ASIENTOS)
    {
      printf("\nLos asientos disponibles son:\n");
      for(i = 0; i < ASIENTOS; i++)
      {
        if(sillones[i] == 0)
        {
          printf("Numero de Aciento %d disponible\n",i+1);
        }
      }
      printf("Ingrese el numero de asiento que desea cocupar\n");
      scanf("%d",&lugar);
      
      if(lugar < 0 || lugar > ASIENTOS)
      {
        printf("\n\n====LUGAR NO EXISTENTE====\n");
      }
      else if(lugar > o || lugar < ASIENTOS)
      {
        if(sillones[lugar-1]==0)
        {
          printf("\n\n====El asiento que a deseado se encuentra disponible, puede tomar su asiento, GRACIAS====\n\n");
          sillones[lugar-1]=1;
          boletosvendidos = boletosvendidos + 1;
        }
        else if(sillones[lugar-1] = 1)
        {
        printf("\n\n====El asiento que desea se encuantra ocupado, elija otro asiento====\n\n")
        }
      }
    }
   
   printf("\n====No hay asientos disponibles, El autobus se encuentra lleno====\n\n");
}
