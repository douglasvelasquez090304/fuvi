/*
Nombre del archivo: tetaedro
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
	float h;
	float v;
	cout << " Para encontrar el Area ingrese el siguiente dato " << endl;
	cout << " Ingrese a :" << endl;
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
		a = pow(b,2)*sqrtf(3);
		cout << " Area :" << a << endl;
		v = (sqrtf(2)/12)*pow(b,3);
		cout << " volumen :" << v << endl;
		h = (b*(sqrtf(6)/3));
		cout << " Altura :" << h << endl;
	}
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

