//Realizado en Dev-C++
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
float a,b,c,r,f,p,h,m,mc;
 
void menuprincipal(){
	printf("Ingrese el numero del calculo que desea realizar:");
	printf("\n1.Calculo de resistencia equivalente");
	printf("\n2.Calculo de corriente");
	printf("\n3.Salir");
	printf("\nSu opcion: ");	
}
 
void menuresistenciaequi(){
	printf("Seleccione el numero de circuito:");
	printf("\n1. Resistencia equivalente para circuito serie");
	printf("\n2. Resistencia equivalente para circuito paralelo");
	printf("\n3. Resistencia equivalente para circuito mixto");
	printf("\nSu opcion: ");
}
 
void pedirserie(){
	printf("1. Resistencia equivalente para circuito serie");
	printf("\nIndroduzca Valor de Ohms resistencia 1: "); scanf("%f",&a);
	printf("\nIndroduzca Valor de Ohms resistencia 2: "); scanf("%f",&b);
	printf("\nIntroduzca Valor de Ohms resistencia 3: "); scanf("%f",&c);
	printf("\nResistencia equivalente= %3.2f (ohms)",a+b+c);
}
 
void pedirparalelo(){
	printf("2. Resistencia equivalente para circuito paralelo");
	printf("\nIndroduzca Valor de Ohms resistencia 1: "); scanf("%f",&a);
	printf("\nIndroduzca Valor de Ohms resistencia 2:"); scanf("%f",&b);
	printf("\nIntroduzca Valor de Ohms resistencia 3:"); scanf("%f",&c);
	printf("\nResistencia equivalente= %3.2f (ohms)", (1/((1/a)+(1/b)+(1/c))));
}
 
void pedirmixto(){
	printf("3. Resistencia equivalente para circuito mixto");
	printf("\nIndroduzca Valor de Ohms resistencia 1: "); scanf("%f",&a);
	printf("\nIndroduzca Valor de Ohms resistencia 2:"); scanf("%f",&b);
	printf("\nIntroduzca Valor de Ohms resistencia 3:"); scanf("%f",&c);
	printf("\nResistencia equivalente= %3.2f (ohms)", ((1/((1/a)+(1/b)))+(c)));	
}
 
void menucorriente(){
	printf("Seleccione el numero de circuito:");
	printf("\n1. Corriente para circuito serie");
	printf("\n2. Corriente para circuito paralelo");
	printf("\n3. Corriente equivalente para circuito mixto"); 
	printf("\nSu opcion: ");
}
 
void pedirserie2(){
	printf("\n1. Corriente para circuito serie");
	printf("\nIndroduzca Valor de Ohms resistencia 1: "); scanf("%f",&a);
	printf("\nIndroduzca Valor de Ohms resistencia 2:"); scanf("%f",&b);
	printf("\nIntroduzca Valor de Ohms resistencia 3:"); scanf("%f",&c);
	printf("\nIntroduzca valor de la fuente:"); scanf("%f",&f);
	printf("Corriente= %3.2f (A)", (f/(a+b+c)));
}
 
void pedirparalelo2(){
	printf("\n1. Corriente para circuito paralelo");
	printf("\nIndroduzca Valor de Ohms resistencia 1: "); scanf("%f",&a);
	printf("\nIndroduzca Valor de Ohms resistencia 2:"); scanf("%f",&b);
	printf("\nIntroduzca Valor de Ohms resistencia 3:"); scanf("%f",&c);
	printf("\nIntroduzca valor de la fuente:"); scanf("%f",&f);
	printf("\nCorriente= %3.2f (A)", (f/(1/((1/a)+(1/b)+(1/c)))));
}
 
void pedirmixto2(){
	printf("3. Resistencia equivalente para circuito mixto");
	printf("\nIndroduzca Valor de Ohms resistencia 1: "); scanf("%f",&a);
	printf("\nIndroduzca Valor de Ohms resistencia 2:"); scanf("%f",&b);
	printf("\nIntroduzca Valor de Ohms resistencia 3:"); scanf("%f",&c);
	printf("\nCorriente= %3.2f (A)", (f/(1/((1/a)+(1/b)))+(c)));
}
 
 
int main(){
	int op, opcion2, opcion3;
	do{
		system("cls");
		menuprincipal();
		scanf("%d",&op);
		switch(op){
			case 1:
					system("cls");
					menuresistenciaequi();
					scanf("%d",&opcion2);
					switch(opcion2){
						case 1: 
								system("cls");
								pedirserie();
								getch();
								break;
						case 2:
								system("cls");	
								pedirparalelo();
								getch();
								break;
						case 3: 
								system("cls");
								pedirmixto();
								getch();
								break;
						default:
								printf("Opcion Incorrecta...!!!");
								getch();
								break;
					}
			case 2:
					system("cls");
					menucorriente();
					scanf("%d",&opcion3);
					switch(opcion3){
						case 1:
								system("cls");
								pedirserie2();
								getch();
								break;
						case 2:
								system("cls");	
								pedirparalelo2();
								getch();
								break;
						case 3:
								system("cls");
								pedirmixto2();
								getch();
								break;
						default:
								printf("Opcion Incorrecta...!!!");
								getch();
								break;
					}
			case 3:
					break;
			default:
					printf("Opcion Incorrecta...!!!");
					getch();
					break;		
		}
	}while(op!=3);

 
return 0;

}