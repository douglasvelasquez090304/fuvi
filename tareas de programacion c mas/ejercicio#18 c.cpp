/*
Nombre del archivo: ejercicio#18
Autor: Douglas Velasquez
Instrucciones: fechas de que ingrese el usuario 
*/

#include<iostream>
using namespace std;

int main() {
	int a;
	int d;
	int m;
	string nombremes;
	// datos de entrada 
	cout << "Ingrese un numero: " << endl;
	cin >> d;
	cout << "Ingrese un numero: " << endl;
	cin >> m;
	cout << "Ingrese numeros: " << endl;
	cin >> a;
	// operaciones 
	if (d<0 || d>31) {
		do {
			cout << "Numero equivocado" << endl;
			cout << "Ingrese un numero: " << endl;
		} while (!(d>0 && d<=31));
	}
	if (m<0 || m>12) {
		do {
			cout << "Numero equivocado" << endl;
			cout << "Ingrese un numero: " << endl;
		} while (!(m>0 && m<=12));
	}
	if (a<0) {
		do {
			cout << "Numeros equivocado" << endl;
			cout << "Ingrese numeros: " << endl;
		} while (a<=0);
	}
	switch (m) {
	case 1:
		nombremes = "Enero";
		break;
	case 2:
		nombremes = "Febrero";
		break;
	case 3:
		nombremes = "Marzo";
		break;
	case 4:
		nombremes = "Abril";
		break;
	case 5:
		nombremes = "Mayo";
		break;
	case 6:
		nombremes = "Junio";
		break;
	case 7:
		nombremes = "Julio";
		break;
	case 8:
		nombremes = "Agosto";
		break;
	case 9:
		nombremes = "Septiembre";
		break;
	case 10:
		nombremes = "Octubre";
		break;
	case 11:
		nombremes = "Noviembre";
		break;
	case 12:
		nombremes = "Diciembre";
		break;
	}
	cout << d << " de " << nombremes << " del " << a << endl;
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

