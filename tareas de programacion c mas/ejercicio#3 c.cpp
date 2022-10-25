/*
Nombre del archivo: ejercicio#3
Autor: Douglas Velasquez
Instrucciones: identificar el mayor  
*/
#include<iostream>
using namespace std;



int main() {
	int a;
	int b;
	int c;
	int n;
	float t;
	float x;
	cout << "Ingrese el total de los numeros:" << endl;
	cin >> t;
	x = 1;
	while (x<=t) {
		cout << "Ingrese un numero" << endl;
		cin >> n;
		if (x==1) {
			a = n;
			b = n;
		} else {
			if (n>a) {
				a = n;
			} else {
				if (n>b) {
					b = n;
				}
			}
		}
		x = x+1;
	}
	cout << "El numero mayor es: " << a << endl;
	cout << "El numero menor es: " << b << endl;
	cout << "Gracia por usar nuestra aplicacion <3" << endl;
	return 0;
}

