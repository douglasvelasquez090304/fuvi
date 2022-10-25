/*
Nombre del archivo: ejercicio#19
Autor: Douglas Velasquez
Instrucciones: Datos de alumnos
*/

#include<iostream>
using namespace std;

#define SIN_TIPO string


int main() {
	SIN_TIPO alu;
	float n;
	float npro;
	int op;
	float p;
	float resultado;
	float t;
	do {
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		cout << "CALCULAR EL PROMEDIO" << endl;
		cout << " 1. DATOS DEL PRIMER ALUMNO" << endl;
		cout << " 2. DATOS DEL SEGUNDO ALUMNO" << endl;
		cout << " 3. DATOS DEL TERCER ALUMNO" << endl;
		cout << "ELIJA UNA OPCION: ";
		cin >> op;
		switch (op) {
		case 1:
			cout << "nombre del primer alumno:";
			cin >> alu;
			cout << "ingrese nota teorica: ";
			cin >> t;
			cout << "ingrese nota practica: ";
			cin >> p;
			cout << "ingrese nota problemas: ";
			cin >> npro;
			if (t>0 && t<=10) {
				t = t*10/100;
				cout << "nota teorica " << t << endl;
				resultado = t+p+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (p>0 && p<=10) {
				p = p*40/100;
				cout << "nota practica " << p << endl;
				resultado = t+p+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (npro>0 && npro<=10) {
				npro = npro*50/100;
				cout << "nota de problemas " << npro << endl;
				resultado = n+p+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			break;
		case 2:
			cout << "nombre del primer alumno";
			cin >> alu;
			cout << "ingrese nota teorica: ";
			cin >> t;
			cout << "ingrese nota practica: ";
			cin >> p;
			cout << "ingrese nota problemas: ";
			cin >> npro;
			if (t>0 && t<=10) {
				t = t*10/100;
				cout << "nota teorica " << t << endl;
				resultado = t+p+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (p>0 && p<=10) {
				p = p*40/100;
				cout << "nota practica " << p << endl;
				resultado = t+p+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (npro>0 && npro<=10) {
				npro = npro*50/100;
				cout << "nota de problemas " << npro << endl;
				resultado = t+p+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			break;
		case 3:
			cout << "nombre del primer alumno: ";
			cin >> alu;
			cout << "ingrese nota teorica: ";
			cin >> t;
			cout << "ingrese nota practica: ";
			cin >> p;
			cout << "ingrese nota problemas: ";
			cin >> npro;
			if (t>0 && t<=10) {
				t = t*10/100;
				cout << "nota teorica " << t << endl;
				resultado = t+p+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (p>0 && p<=10) {
				p = p*40/100;
				cout << "nota practica " << p << endl;
				resultado = t+p+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			if (npro>0 && npro<=10) {
				npro = npro*50/100;
				cout << "nota de problemas " << npro << endl;
				resultado = t+p+npro;
				cout << "el resultado es " << resultado << endl;
			} else {
				cout << "MENSAJE DE ERROR" << endl;
			}
			break;
		}
		cout << "Presione enter para continuar" << endl;
		cin.get(); // a diferencia del pseudocódigo, espera un Enter, no cualquier tecla
	} while (op!=3);
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

