/*
Nombre del archivo: ejercicio#5
Autor: Douglas Velasquez
Instrucciones: potenciacion  
*/
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float b;
	float c;
	cout << "Ingrese un numero:" << endl;
	cin >> a;
	b = pow(a,2);
	c = sqrtf(b);
	if (a>0) {
		b = pow(a,2);
		c = sqrtf(b);
	} else {
		cout << "Ingrese otra vez un numero:" << endl;
		cin >> a;
	}
	if (a>0) {
		b = pow(a,2);
		c = sqrtf(b);
	}
	cout << " Numero que ingreso:" << a << endl;
	cout << " Numero elevado ala potencia:" << b << endl;
	cout << "Raiz cuadrada del numero:" << c << endl;
	cout << "Gracias por elegir nuestra aplicacion <3" << endl;
	return 0;
}

