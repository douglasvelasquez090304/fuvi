/*
Nombre del archivo: octaedro
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
	float v;
	// Area
	cout << " Ingrese el siguiente dato" << endl;
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
		a = 2*pow(b,2)*sqrtf(3);
		// volumen 
		cout << " Area :" << a << endl;
		v = sqrtf(2)/3*pow(b,3);
		cout << " Volumen:" << v << endl;
	}
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

