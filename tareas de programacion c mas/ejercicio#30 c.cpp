/*
Nombre del archivo: ejercicio#30
Autor: Douglas Velasquez
Instrucciones: muestra el donde esta los numeros  
*/

#include<iostream>
using namespace std;



int main() {
	int vector[10];
	int x;
	for (x=0;x<=9;x++) {
		cout << "Ingresa un numero" << endl;
		cin >> x;
	}
	for (x=0;x<=9;x++) {
		cout << x << endl;
	}
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

