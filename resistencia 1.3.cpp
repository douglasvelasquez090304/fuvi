/*
Nombre: Douglas Velasquez
Lugar: ITV
Descripcion: Algoritmo para resistencia
*/

#include<stdio.h>
#include <math.h>
#include<conio.h>
#include<stdlib.h>

void color(int x)
{
 switch(x)
    {
             case 0:           
                  printf("Negro\n");
             break;
             case 1:
                  printf("Cafe\n");
             break;
             case 2:
                  printf("Rojo\n");
             break;
             case 3:
                  printf("Naranja\n");
             break;
             case 4:
                  printf("Amarillo\n");
             break;
             case 5:
              printf("Verde\n");
             break;
             case 6:
                  printf("Azul\n");
             break;
             case 7:
                  printf("Violeta\n");
             break;
             case 8:
                  printf("Gris\n");
             break;
             case 9:
                  printf("Blanco\n");
             break;
            
  }
}
void calcula(int x,int y,int z)
{
  double result, resistencia;  
            result=pow(10,z);
            resistencia=(y*result);
            printf("El valor de la resistencia es: %d%.f Ohms \n",x,resistencia);
}
int main()
{
  
   int a,b,c;
  
    system("color 0a");
   
   printf(" [0] Negro\n [1] Cafe\n [2] Rojo\n [3] Naranja\n [4] Amarillo\n [5] Verde\n [6] Azul\n [7] Violeta\n [8] Gris\n [9] Blanco\n ");
   printf("\nIngresa el numero del color de la primera banda:\n");
   scanf("%d",&a);
   color(a);
   printf("\nIngresa el numero del color de la segunda banda:\n");
   scanf("%d",&b);
   color(b);
   printf("\nIngresa el numero del color de la tercera banda:\n");
   scanf("%d",&c);
   color(c);
   system ("cls");
   calcula(a,b,c);     
   system("pause");                          
 }
 