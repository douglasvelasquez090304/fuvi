/*
Nombre del archivo: ejercicio#4
Autor: Douglas Velasquez
Instrucciones: suma de valores  
*/
#include<iostream>
using namespace std;

int main() {
	float a;
	float b;
	float c;
	float producto;
	float suma;
	cout << " Ingrese un numero #1" << endl;
	cin >> a;
	cout << " Ingrese un numero #2" << endl;
	cin >> b;
	cout << "Ingrese un numero #3" << endl;
	cin >> c;
	if (a<0) {
		producto = a*b*c;
		cout << "El producto es:" << producto << endl;
	} else {
		suma = a+b+c;
		cout << " La suma es:" << suma << endl;
		cout << "Espero que le haya gustado nuesttra aplicacion <3" << endl;
	}
	return 0;
}

