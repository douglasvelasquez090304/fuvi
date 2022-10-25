/*
Nombre del archivo: ejercicio#1
Autor: Douglas Velasquez
Instrucciones: cambio de valores 
*/

#include<iostream>
using namespace std;


int main() {
	float a;
	float b;
	float x;
	cout << "Ingrese el valor#1" << endl;
	cin >> a;
	cout << "Ingrese el valor#2" << endl;
	cin >> b;
	// ECUACION 
	x = a;
	a = b;
	b = x;
	cout << "Valor#1:" << a << endl;
	cout << "Valor#2:" << b << endl;
	cout << "Gracia por usar nuestra aplicacion <3" << endl;
	return 0;
}

