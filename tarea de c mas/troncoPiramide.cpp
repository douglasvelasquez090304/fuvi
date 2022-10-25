// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float al;
	float at;
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
	at = al+f+n;
	cout << "Area Total:" << at << endl;
	cout << "Ingrese la altura:" << endl;
	cin >> h;
	while ((h<=0)) {
		cout << "Ingrese la altura:" << endl;
		cin >> h;
	}
	v = 1/3*h*(f+n*sqrtf(f*n));
	cout << "Volumen:" << v << endl;
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

