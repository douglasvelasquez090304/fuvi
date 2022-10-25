/*
Nombre del archivo: hexaedro
Autor: Douglas Velasquez
Instrucciones: hacer ecuaciones matematicas 
*/

#include<iostream>
#include<math.h>
using namespace std;



int main() {
	float al;
	float b;
	float contador;
	float d;
	float v;
	// DATOS DE ENTRADA 
	cout << " ingrese el siguiente dato " << endl;
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
		al = 6*pow(b,2);
		cout << " Area lateral :" << al << endl;
		// volumen 
		v = pow(b,3);
		cout << " volumen: " << v << endl;
		// D 
		d = b*sqrtf(3);
		cout << " D :" << d << endl;
	}
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

