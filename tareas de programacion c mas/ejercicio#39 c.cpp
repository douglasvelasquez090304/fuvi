/*
Nombre del archivo: ejercicio#39
Autor: Douglas Velasquez
Instrucciones: prestamo dependiendo de la cantidad de salario
*/

#include<iostream>
using namespace std;

int main() {
	float a;
	cout << "Ingrese la cantidad de salario que obtiene " << endl;
	cin >> a;
	if (a>=200000) {
		cout << "Su prestano seria de:" << endl;
		cout << "C$500,000 " << endl;
	} else {
		cout << "Ustede no cuenta con el salario minimo para el prestamo" << endl;
	}
	if (a>=500000) {
		cout << "C$2,000.000" << endl;
	}
	return 0;
}

