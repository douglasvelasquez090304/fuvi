/*
Nombre del archivo: dodecaedro
Autor: Douglas Velasquez
Instrucciones: hacer ecuaciones matematicas 
*/

#include<iostream>
#include<cmath>
using namespace std;


int main() {
    double a;
	double b;
	double contador;
	double v;
	double n;

	// AREA
	// Dato de entrada 
	cout << " Ingrese el siguiente dato " << endl;
	cout << " ingrese a :" << endl;
	cin >> b;
	contador = 1;
	cout << "ingrese a - Intento #" << contador << endl;
	cin >> b;
	while ((contador<=2 && b<0)) {
		contador = contador+1;
		cout << "ingrese a- Intento #" << contador << endl;
		cin >> b;
	}
	if ((b<=0)) {
		cout << "Ya agotó el total de intentos." << endl;
	} else {
		n = sqrtf(35*sqrtf(5));
		a = 3*pow(b,3)*sqrtf(35*sqrtf(5));
		cout << " Area:" << n << endl;
		// Volumen 
		v= (0.25*22*sqrtf(5))*pow(b,3);
		
		cout << " Volumen: " << v << endl;
		
	}
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

