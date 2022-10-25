/*
Nombre del archivo: troncoDepiramide
Autor: Douglas Velasquez
Instrucciones: hacer ecuaciones matematicas 
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float al;
	double a;
	float b;
	float c;
	float d;
	float df;
	float f;
	float h;
	float n;
	float pb;
	float v;
	// Datos de entrada 
	cout << "Para encontrar el area lateral ingrese los sigiuentes datos " << endl;
	cout << " ingrese PB :" << endl;
	cin >> b;
	cout << " ingrese Cd :" << endl;
	cin >> c;
	cout << " ingrese DF:" << endl;
	cin >> d;
	// Ecuacion 
	while ((b<=0 && c<=0)) {
		cout << " ingrese PB :" << endl;
		cin >> b;
		cout << " ingrese Cd :" << endl;
		cin >> c;
		while ((d<=0)) {
			cout << " ingrese DF:" << endl;
			cin >> d;
		}
	}
	al = ((b+c)/2)*d;
	cout << " Area Lateral:" << al << endl;
	cout << "Ingrese AB:" << endl;
	cin >> f;
	cout << "Ingrese Ab:" << endl;
	cin >> n;
	while ((f<=0 && n<=0)) {
		cout << "Ingrese AB:" << endl;
		cin >> f;
		cout << "Ingrese Ab:" << endl;
		cin >> n;
	}
	a = al+f+n;
	cout << "Area Total:" << a << endl;
	cout << "Ingrese la altura:" << endl;
	cin >> h;
	while ((h<=0)) {
		cout << "Ingrese la altura:" << endl;
		cin >> h;
	}
	v = (0.3333333333*h*f+n*sqrtf(f*n));
	cout << "Volumen:" << v << endl;
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

