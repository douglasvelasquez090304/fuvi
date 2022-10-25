/*
Nombre del archivo: ejercicio#35
Autor: Douglas Velasquez
Instrucciones: valores de X positvo y negativo 
*/

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float n;
	float p;
	float x;
	cout << "Ingrese X: " << endl;
	cin >> x;
	p = pow((x-2),2)/2+pow((x-4),4)/4+pow((x-6),6)/6;
	n = pow((x+2),2)/2+pow((x+4),4)/4+pow((x+6),6)/6;
	cout << "X Negativo: " << p << endl;
	cout << "X Positivo: " << n << endl;
	cout << "Espero que le haya ayudado nuestra aplicacion <3" << endl;
	return 0;
}

