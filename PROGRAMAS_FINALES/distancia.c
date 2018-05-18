/*----------------------------------------------------------------------------*/
/*Autor: Enríquez Antonio Noé                                                 */
/*E-mail:noeenriquez1998@gmail.com                                            */
/*Fecha de creacion: 16/04/2018                                               */
/*Fecha de modificacion: 17/04/2018                                           */
/*Descripcion: Distancia entre dos puntos por medio del teorema               */
/*----------------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

void distanciaEntre (void);


 int main (void)

{
   distanciaEntre(void);

	return 0;                                                      
} 



void distanciaEntre(void)
{


float X,Y,X1,X2,Y1,Y2,distancia,R1,R2;                       

printf("Ingrese las coordenadas del primer punto \n");          

ptintf("Dame las coordenadas en el eje X \n");                  

scanf("%f",&X1);                                               

printf("Dame las coordenadas en el eje Y \n");                  

scanf("%f";&Y1);                                               

printf("\n\n Ingrese las coordenadas del segundo punto \n");   

printf("Dame las coordenadas en el eje X \n");                       

scanf("%f",&X2);                                                

printf("Dame las coordenadas en el eje Y \n");                  

scanf("%f";&Y2);
  
   if (X1>X2){  
      X = X1-X2
}
   else {
      X = X2-X1
}
  
   if (Y1>Y2){
      Y = Y1-Y2
}
   else {
      Y = Y2-Y1
}                                               
   distancia = sqrt(pow(x,2)+pow(y,2));                        

printf("La distancia que hay entres ambos puntos es de: %.2f", distancia); 

}
