/*
Nombre del archivo: ejercicio#25
Autor: Douglas Velasquez
Instrucciones: convertidor de grados Celsius y Fahrenheit
*/
#include<iostream>
using namespace std;

int main() {
	float c;
	float f;
	float r;
	float v;
	cout << "Ingresa los grados Celsius" << endl;
	cin >> c;
	f = (c*(9/5))+32;
	cout << "Los grados Celsius convertidos a grados Fahrenheit es: " << f << endl;
	cout << "Ingresa los grados Fahrenheit" << endl;
	cin >> r;
	v = (r-32)*5/9;
	cout << "Los grados Fahrenheit convertidos a grados  Celsiu es: " << v << endl;
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

