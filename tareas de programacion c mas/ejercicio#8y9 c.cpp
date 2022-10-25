/*
Nombre del archivo: ejercicio#8y9 
Autor: Douglas Velasquez
Instrucciones: numeros pares o impares
*/

#include<iostream>
#include <stdio.h>
using namespace std;


int main(void) {
	float n;
	float v;
	
	do {
		cout << "Ingrese un numero:" << endl;
		cin >> n;
		if (n>0) {
			cout << "Este " << n << " Numero es aceptable." << endl;
		}
	} while (n==0);
	if (n>=0) {
		if (n % 2==0) {
			cout << " Es un numero par:" << n << endl;
		}
		if (n%2>0) {
			cout << "Es un numero impar:" << n << endl;
		}
	}
	cout << "Gracias por elegir nuestra aplicacion <3" << endl;
	return 0;
}

