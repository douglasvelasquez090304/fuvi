/*
Nombre del archivo: ejercicio#29
Autor: Douglas Velasquez
Instrucciones: si la suma de los dos numeros es y igual 
*/
#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	cout << "Ingresa 3 números" << endl;
	cin >> a >> b >> c;
	if (a==(b+c)) {
		cout << "El numero " << a << " es la suma de " << b << " + " << c << endl;
	} else {
		if (b==(a+c)) {
			cout << "El numero " << b << " es la suma de " << a << " + " << c << endl;
		} else {
			if (c==(a+b)) {
				cout << "El numero " << c << " es la suma de " << a << " + " << b << endl;
			} else {
				cout << "Ningun numero es igual a la suma de los otros dos " << endl;
			}
		}
	}
	cout << "Espero que nuestra aplicacion le haya ayudado <3" << endl;
	return 0;
}

