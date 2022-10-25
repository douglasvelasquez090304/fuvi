/*
Nombre del archivo: icosaedro
Autor: Douglas Velasquez
Instrucciones: hacer ecuaciones matematicas 
*/

#include<iostream>
#include<math.h>
using namespace std;


int main() {
	float a;
	float b;
	float contador;
	double v;
	// AREA
	// DATO DE ENTRADA
	cout << " ingrese el siguiente dato " << endl;
	cout << " ingrese a:" << endl;
	cin >> b;
	contador = 1;
	cout << "ingrese a - Intento #" << contador << endl;
	cin >> b;
	while ((contador<=2 && b<=0)) {
		contador = contador+1;
		cout << "ingrese a- Intento #" << contador << endl;
		cin >> b;
	}
	if ((b<=0)) {
		cout << "Ya agotó el total de intentos." << endl;
	} else {
		a = 5*pow(b,2)*sqrtf(3);
		cout << " Area:" << a << endl;
		// VOLUMEN
		v = (0.4166666667) * 3+sqrtf(5) * pow(b,3);
		cout << " volumen:" << v << endl;
	}
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

