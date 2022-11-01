/*
Nombre del archivo: aplicacion.cpp
Autor: Douglas Velasquez
Instrucciones: Un pseudocodigo con lo basico de la electrotecnia para resolver lo que necesita 
*/

#include<iostream>
using namespace std;

int main() {
	int c,d,r;	
	float e,g,i,l,p,q,t,u,v,w,z;
	
	// ELECCION DE DATOS 
	do {
		cout << "QUE DESEA CALCULAR: " << endl;
		cout << "1. El total de las resistencias en serie" << endl;
		cout << "2. El total de las resistencias en paralelo" << endl;
		cout << "3. El voltaje " << endl;
		cout << "4. La corriente" << endl;
		cout << "5. La resistencia " << endl;
		cout << "6. El total de los condensadores en serie" << endl;
		cout << "7. El total de los condensadores en paralelo" << endl;
		cout << "8. El total de los inductores en serie" << endl;
		cout << "9. El total de los condensadores en paralelo" << endl;
		cout << "10. Salir" << endl;
		cout << "Eliga una opcion ";
		cin >> d;
		cout << endl; 
		system("cls");
		switch (d) {
			system("cls");
		case 1:
			cout << "Ingrese la cantidad de resistencias" << endl;
			cin >> r;
			if (r<=0) {
				cout << "Valor equivocado" << endl;
			} else {
				switch (r) {
				case 1:
					cout << "Valor equivocado" << endl;
					break;
				case 2:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w;
					i = q+w;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 3:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e;
					i = q+w+e;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 4:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r;
					i = q+w+e+r;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 5:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t;
					i = q+w+e+r+t;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 6:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u;
					i = q+w+e+r+t+u;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 7:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p;
					i = q+w+e+r+t+u+p;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 8:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z;
					i = q+w+e+r+t+u+p+z;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 9:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z >> g;
					i = q+w+e+r+t+u+p+z+g;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 10:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z >> g >> l;
					i = q+w+e+r+t+u+p+z+g+l;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				}
				cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
			}
				system("pause");
				system("cls");
			break;
			
		case 2:
			cout << "Ingrese la cantidad de resistencias:" << endl;
			cin >> r;
			if (r<=0) {
				cout << "Valor equivocado" << endl;
			} else {
				switch (r) {
				case 1:
					cout << "Valor equivocado" << endl;
					break;
				case 2:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w;
					i = q*w/q+w;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 3:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e;
					i = 1/1/q+1/w+1/e;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 4:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r;
					i = 1/1/q+1/w+1/e+1/r;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 5:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t;
					i = 1/1/q+1/w+1/e+1/r+1/t;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 6:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 7:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 8:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 9:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				case 10:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g+1/l;
					cout << "Valor total de las resistencias: " << i << " Ohs" << endl;
					break;
				}
				cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
			}
				system("pause");
				system("cls");
			break;
		case 3:
			cout << "Ingrese los siguientes valores" << endl;
			cout << "Corriente: " << endl;
			cin >> i;
			cout << "Resistencia: " << endl;
			cin >> r;
			if (r<=0 && i<=0) {
				cout << "Valor equivocado." << endl;
			} else {
				v = i*r;
				cout << "Voltaje:" << v << " V" << endl;
				cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
			}
				system("pause");
				system("cls");
			break;
		case 4:
			cout << "Ingrese los siguientes valores " << endl;
			cout << "Voltaje: " << endl;
			cin >> v;
			cout << "Resistencia: " << endl;
			cin >> r;
			if (v<=0 && r<=0) {
				cout << "Valor equivocado." << endl;
			} else {
				i = v/r;
				cout << "Corriente: " << i << " Amp" << endl;
				cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
			}
				system("pause");
				system("cls");
			break;
		case 5:
			cout << "Ingrese los siguientes valores " << endl;
			cout << "Voltaje: " << endl;
			cin >> v;
			cout << "Corriente: " << endl;
			cin >> i;
			if (v<=0 && i<=0) {
				cout << "Valor equivocado." << endl;
			} else {
				r = v/i;
				cout << "Resistencia: " << r << "  Ohs" << endl;
				cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
			}
				system("pause");
				system("cls");
			break;
		case 6:
			cout << "Ingrese la cantidad de condensadores:" << endl;
			if (c<=0) {
				cout << "Valor equivocado" << endl;
			} else {
				switch (c) {
				case 1:
					cout << "Valor equivocado" << endl;
					break;
				case 2:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w;
					i = q*w/q+w;
					cout << "Valor total de los condensadores: " << i << " Farad" << endl;
					break;
				case 3:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e;
					i = 1/1/q+1/w+1/e;
					cout << "Valor total de las resistencias: " << i << " Farad" << endl;
					break;
				case 4:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r;
					i = 1/1/q+1/w+1/e+1/r;
					cout << "Valor total de las resistencias: " << i << "Farad" << endl;
					break;
				case 5:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t;
					i = 1/1/q+1/w+1/e+1/r+1/t;
					cout << "Valor total de las resistencias: " << i << " Farad" << endl;
					break;
				case 6:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u;
					cout << "Valor total de las resistencias: " << i << " Farad" << endl;
					break;
				case 7:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p;
					cout << "Valor total de las resistencias: " << i << " Farad" << endl;
					break;
				case 8:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z;
					cout << "Valor total de las resistencias: " << i << " Farad" << endl;
					break;
				case 9:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z >> g;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g;
					cout << "Valor total de las resistencias: " << i << " Farad" << endl;
					break;
				case 10:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z >> g >> l;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g+1/l;
					cout << "Valor total de las resistencias: " << i << " Farad" << endl;
					break;
				}
				cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
			}
				system("pause");
				system("cls");
			break;
		case 7:
			cout << "Ingrese la cantidad de condensadores:" << endl;
			cin >> c;
			if (c<=0) {
				cout << "Valor equivocado" << endl;
			} else {
				switch (c) {
				case 1:
					cout << "Valor equivocado" << endl;
					break;
				case 2:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w;
					i = q+w;
					cout << "Valor total de los condensadores: " << i << " Farad" << endl;
					break;
				case 3:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e;
					i = q+w+e;
					cout << "Valor total de los condensadores: " << i << " Farad" << endl;
					break;
				case 4:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r;
					i = q+w+e+r;
					cout << "Valor total de los condensadores: " << i << " Farad" << endl;
					break;
				case 5:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t;
					i = q+w+e+r+t;
					cout << "Valor total de los condensadores: " << i << " Farad" << endl;
					break;
				case 6:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u;
					i = q+w+e+r+t+u;
					cout << "Valor total de los condensadores: " << i << " Farad" << endl;
					break;
				case 7:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p;
					i = q+w+e+r+t+u+p;
					cout << "Valor total de los condensadores: " << i << " Farad" << endl;
					break;
				case 8:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z;
					i = q+w+e+r+t+u+p+z;
					cout << "Valor total de las resistencias: " << i << " Farad" << endl;
					break;
				case 9:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z >> g;
					i = q+w+e+r+t+u+p+z+g;
					cout << "Valor total de las resistencias: " << i << " Farad" << endl;
					break;
				case 10:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z >> g >> l;
					i = q+w+e+r+t+u+p+z+g+l;
					cout << "Valor total de las resistencias: " << i << " Farad" << endl;
					break;
				}
				cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
			}
				system("pause");
				system("cls");
			break;
		case 8:
			cout << "Ingrese la cantidad de los inductores:" << endl;
			cin >> c;
			if (c<=0) {
				cout << "Valor equivocado" << endl;
			} else {
				switch (c) {
				case 1:
					cout << "Valor equivocado" << endl;
					break;
				case 2:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w;
					i = q+w;
					cout << "Valor total de los inductores: " << i << " Farad" << endl;
					break;
				case 3:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e;
					i = q+w+e;
					cout << "Valor total de los inductores: " << i << " Henry" << endl;
					break;
				case 4:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r;
					i = q+w+e+r;
					cout << "Valor total de los inductores: " << i << " Henry" << endl;
					break;
				case 5:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t;
					i = q+w+e+r+t;
					cout << "Valor total de los inductores: " << i << " Henry" << endl;
					break;
				case 6:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u;
					i = q+w+e+r+t+u;
					cout << "Valor total de los inductores: " << i << " Henry" << endl;
					break;
				case 7:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p;
					i = q+w+e+r+t+u+p;
					cout << "Valor total de los inductores: " << i << " Henry" << endl;
					break;
				case 8:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z;
					i = q+w+e+r+t+u+p+z;
					cout << "Valor total de las resistencias: " << i << " Henry" << endl;
					break;
				case 9:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z >> g;
					i = q+w+e+r+t+u+p+z+g;
					cout << "Valor total de las resistencias: " << i << " Henry" << endl;
					break;
				case 10:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z >> g >> l;
					i = q+w+e+r+t+u+p+z+g+l;
					cout << "Valor total de las resistencias: " << i << " Henry" << endl;
					break;
				}
				cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
			}
				system("pause");
				system("cls");
			break;
		case 9:
			cout << "Ingrese la cantidad de inductores:" << endl;
			cin >> r;
			if (r<=0) {
				cout << "Valor equivocado" << endl;
			} else {
				switch (r) {
				case 1:
					cout << "Valor equivocado" << endl;
					break;
				case 2:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w;
					i = q*w/q+w;
					cout << "Valor total de los inductores: " << i << " Henry" << endl;
					break;
				case 3:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e;
					i = 1/1/q+1/w+1/e;
					cout << "Valor total de los inductores: " << i << " Henry" << endl;
					break;
				case 4:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r;
					i = 1/1/q+1/w+1/e+1/r;
					cout << "Valor total de los inductores: " << i << " Henry" << endl;
					break;
				case 5:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t;
					i = 1/1/q+1/w+1/e+1/r+1/t;
					cout << "Valor total de los inductores: " << i << " Henry" << endl;
					break;
				case 6:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u;
					cout << "Valor total de los inductores: " << i << " Henry" << endl;
					break;
				case 7:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p;
					cout << "Valor total de los inductores: " << i << " Henry" << endl;
					break;
				case 8:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z;
					cout << "Valor total de las resistencias: " << i << " Henry" << endl;
					break;
				case 9:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z >> g;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g;
					cout << "Valor total de las resistencias: " << i << " Henry" << endl;
					break;
				case 10:
					cout << "Ingrese los valores" << endl;
					cin >> q >> w >> e >> r >> t >> u >> p >> z >> g >> l;
					i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g+1/l;
					cout << "Valor total de las resistencias: " << i << " Henry" << endl;
					break;
				}
				cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
			}
				system("pause");
				system("cls");
			break;
		case 10:
			cout << "Que tenga un buen dia <3" << endl;
			break;
		}
		cin.get(); 
		cout << endl; 
		
	} while (d!=10);
	return 0;
}

