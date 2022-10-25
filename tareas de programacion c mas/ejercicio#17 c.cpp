/*
Nombre del archivo: ejercicio#17
Autor: Douglas Velasquez
Instrucciones: Multiplicacion 
*/

#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int x;
	x = 1;
	a = 0;
	b = 0;
	// calculos para determinar 
	while (x<=100) {
		if (x%2==0) {
			cout << "Multiplicacion de 2:" << x << endl;
			a = a+1;
		} else {
			if (x%3==0) {
				cout << "Multiplicacion de 3:" << x << endl;
				b = b+1;
			}
		}
		x = x+1;
	}
	// datos de saloda 
	cout << "#########################################" << endl;
	cout << "Numeros multiplos de 2: " << a << endl;
	cout << "Numeros multiplos de 3: " << b << endl;
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

