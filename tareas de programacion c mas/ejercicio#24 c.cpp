/*
Nombre del archivo: ejercicio#24
Autor: Douglas Velasquez
Instrucciones: elevado ala potencia 
*/
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float i;
	float n;
	float resultado;
	do {
		cout << "Escribe N" << endl;
		cin >> n;
		if (n<1) {
			cout << " Debe ser mayor o igual que 1 " << endl;
		}
	} while (n<=0);
	// Variable a usar
	resultado = 0;
	for (i=1;i<=n;i++) {
		// Calcular el resultado
		resultado = pow(i,2);
		// Mostramos el resultado
		cout << "El valor al cuadrado de " << i << " es de " << resultado << endl;
	}
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

