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
	float ab;
	float al;
	float at;
	float c;
	float g;
	float h;
	float pi;
	float r;
	float t;
	float v;
	// area lateral
	cout << " ingrese los siguientes datos para calcular el Area Lateral" << endl;
	cout << " ingrese generatriz" << endl;
	cin >> g;
	cout << " ingrese el Radio Mayor " << endl;
	cin >> r;
	cout << " Ingrese el Radio Menor " << endl;
	cin >> t;
	if ((g<=0 && r<=0 && t<=0)) {
		cout << " ingrese generatriz" << endl;
		cin >> g;
		cout << " ingrese el Radio Mayor " << endl;
		cin >> r;
		cout << " Ingrese el Radio Menor " << endl;
		cin >> t;
		al = ((M_PI*g)*r+t);
	} else {
		al = ((M_PI*g)*r+t);
	}
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
	v = 1/3*M_PI*h*pow(r,2)+pow(t,2)+r*t;
	cout << "volumen = " << v << endl;
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

