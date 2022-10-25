/*
Nombre del archivo: ejercicio#16
Autor: Douglas Velasquez
Instrucciones: indentificar cual es el N mayor 
*/
#include<iostream>
using namespace std;


int main() {
	float c;
	float d;
	float i;
	int n;
	int x;
	x = 1;
	while (x!=0) {
		cout << "Ingrese un numero:" << endl;
		cin >> n;
		if (n==0) {
			x = n;
		}
	}
	c = 10;
	d = 5;
	i = 0;
	cout << "Numero maximo: " << c << endl;
	cout << "Numero medio: " << d << endl;
	cout << "Numero minimo : " << i << endl;
	cout << "Espeero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

