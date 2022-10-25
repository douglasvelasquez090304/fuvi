/*
Nombre del archivo: ejercicio#40
Autor: Douglas Velasquez
Instrucciones: ecuaciones de 2 numeros 
*/

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float b;
	float x;
	cout << "Ingrese un numero: " << endl;
	cin >> a;
	cout << "Ingrese un segundo numero: " << endl;
	cin >> b;
	if (a>=0 && b>=0) {
		x = (a/((a-b)*b));
	} else {
		cout << "Se equivoco de numero  " << endl;
	}
	cout << "Valor: " << x << endl;
	cout << "Espero que le haya ayudado nuestra aplicacion <3" << endl;
	return 0;
}

