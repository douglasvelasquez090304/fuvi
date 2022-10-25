/*
Nombre del archivo: ejercicio#22
Autor: Douglas Velasquez
Instrucciones: Años bisiestos 
*/

#include<iostream>
using namespace std;


int main() {
	int a;
	cout << "Ingresa un año" << endl;
	cin >> a;
	if (a%4==0) {
		if (a%100==0) {
			if (a%400==0) {
				cout << "El año " << a << " es bisiesto" << endl;
			} else {
				cout << "El año " << a << " no es bisiesto" << endl;
			}
		} else {
			cout << "El año " << a << " es bisiesto" << endl;
		}
	} else {
		cout << "El año " << a << " no es bisiesto" << endl;
	}
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}



