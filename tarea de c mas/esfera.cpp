/*
Nombre del archivo: esfera
Autor: Douglas Velasquez
Instrucciones: hacer ecuaciones matematicas 
*/
#include<iostream>
#include<math.h>
using namespace std;



int main() {
	float a;
	float contador;
	float pi;
	float r;
	double v;
	float m;

	// datos de entreda 
	cout << " para hayar A Y Volumen ingrese el siguiente datos" << endl;
	cout << "ingrese el radio menor:" << endl;
	cin >> r;
	contador = 1;
	cout << "ingrese a - Intento #" << contador << endl;
	cin >> r;
	while ((contador<=2 && r<=0)) {
		contador = contador+1;
		cout << "ingrese a- Intento #" << contador << endl;
		cin >> r;
	}
	if ((r<=0)) {
		cout << "Ya agotó el total de intentos." << endl;
	} else {
		a = 4*M_PI*pow(r,2);
		cout << "A:" << a << endl;
			m=(M_PI*pow(r,3));
		v = (1.333333333* m);
	
		cout << "Volumen:" << v << endl;
	}
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

