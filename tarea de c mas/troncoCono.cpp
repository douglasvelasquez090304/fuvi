/*
Nombre del archivo: troncoCono
Autor: Douglas Velasquez
Instrucciones: hacer ecuaciones matematicas 
*/
#include<iostream>
#include<math.h>
using namespace std;


int main() {
	float ab;
	float al;
	float at;
	float c;
	float g;
	float h;
	float pi;
	float r;
	float t;
	float m;
	float v;
	// area lateral
	cout << " ingrese los siguientes datos para calcular el Area Lateral" << endl;
	cout << " ingrese generatriz" << endl;
	cin >> g;
	cout << " ingrese el Radio Mayor " << endl;
	cin >> r;
	cout << " Ingrese el Radio Menor " << endl;
	cin >> t;
	while ((g<=0 && r<=0)) {
		cout << " ingrese generatriz" << endl;
		cin >> g;
		cout << " ingrese el Radio Mayor " << endl;
		cin >> r;
		while ((t<=0)) {
			cout << " Ingrese el Radio Menor " << endl;
			cin >> t;
		}
	}
	al = ((M_PI*g)*r+t);
	cout << " Area Lateral = " << al << endl;
	// area total
	cout << " para encontrar el Area Total " << endl;
	cout << " Ingrese AB" << endl;
	cin >> ab;
	cout << " ingrese Ab " << endl;
	cin >> c;
	while ((ab<=0 && c<=0)) {
		cout << " Ingrese AB" << endl;
		cin >> ab;
		cout << " ingrese Ab " << endl;
		cin >> c;
	}
	at = al+ab+c;
	cout << " Area total =" << at << endl;
	cout << " para encontrar el volumen ingrese el siguiente dato" << endl;
	cout << " ingrese la Altura " << endl;
	cin >> h;
	while ((h<=0)) {
		cout << " ingrese la Altura " << endl;
		cin >> h;
	}
	
	v = 0.33333333333333333333*M_PI*h *pow(r,2)+pow(t,2)+r*t ;
	cout << "volumen = " << v << endl;
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

