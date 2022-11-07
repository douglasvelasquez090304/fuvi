/*
Nombre del archivo: Todas_las_figuras_geometricas.cpp
Autor: Douglas Velasquez
Instrucciones: todas las ecuaciones de las figuras geometricas de la tarea 
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a,ab,al,at,b,c,contador,d,df,g,h,n,p,pb,pi,r,t,v;
	int f;

	do {
		// Todas las figuras geometricas 
		cout << "******Figuras geometricas******" << endl;
		cout << "1.  Cilindro" << endl;
		cout << "2.  Cono" << endl;
		cout << "3.  Dodecaedro" << endl;
		cout << "4.  Esfera" << endl;
		cout << "5.  Hexaedro" << endl;
		cout << "6.  Icosaedro" << endl;
		cout << "7.  Ocataedro" << endl;
		cout << "8.  Piramide" << endl;
		cout << "9.  Prisma" << endl;
		cout << "10. Tetraedo" << endl;
		cout << "11. Tronco de cono" << endl;
		cout << "12. Tronco de piramide" << endl;
		cout << "13. Salir" << endl;
		cout << "Eliga una opcion ";
		cin >> f;
		cout << endl; 
		system("cls");
		switch (f) {
			system("cls");
		case 1:
			// Area lateral 
			// Datos de entrada 
			cout << " para encontrar el area lateral , area total y el volumen ingrese los siguentes datos " << endl;
			cout << " Ingrese los datos de radio " << endl;
			cin >> r;
			cout << " Ingrese la altura " << endl;
			cin >> h;
			while ((r<=0 && h<=0)) {
				cout << " Ingrese los datos de radio " << endl;
				cin >> r;
				cout << " Ingrese la altura :" << endl;
				cin >> h;
			}
			// Ecuacion para hayar Area lagteral 
			al = 2*M_PI*r*h;
			cout << "Area Lateral =" << al << " " << endl;
			// Fórmula del área total del prisma
			at = 2*M_PI*r*h+r;
			cout << "Area total = " << at << "  " << endl;
			// Ecuacion  para hayar volumen 
			cout << " Calculando el volumen del cilindro  " << endl;
			v = M_PI*pow(r,2)*h;
			cout << " Volumen = " << v << " " << endl;
			cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
			
			 	system("pause");
				system("cls");
			break;
		case 2:
			cout << " Ingrese los datos para encontrar el Area Lateral " << endl;
			cout << " Ingrese el Radio " << endl;
			cin >> r;
			cout << " Ingrese el generatriz " << endl;
			cin >> g;
			cout << " Ingrese la altura " << endl;
			cin >> h;
			while ((r<=0 && g<=0)) {
				cout << " Ingrese el Radio " << endl;
				cin >> r;
				cout << " Ingrese el generatriz " << endl;
				cin >> g;
				while ((h<=0)) {
					cout << " Ingrese la altura " << endl;
					cin >> h;
				}
			}
			al = M_PI*r*g;
			cout << " Area Lateral =" << al << endl;
			at = M_PI*r*g+r;
			cout << " Area Total =" << at << endl;
			v = M_PI*pow(r,2)*h/3;
			cout << " Volumen = " << v << endl;
			cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
				system("pause");
				system("cls");
			break;
		case 3:
			// AREA
			// Dato de entrada 
			cout << " Ingrese el siguiente dato " << endl;
			cout << " ingrese a :" << endl;
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
				a = 3*pow(b,3)*sqrtf(25+10*sqrtf(5));
				cout << " Area:" << a << endl;
				// Volumen 
				v = 1/4*(15+7*sqrtf(5))*pow(b,3);
				cout << " Volumen:" << v << endl;
			}
			cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
				system("pause");
				system("cls");
			break;
		case 4:
			// datos de entreda 
			cout << " para hayar A Y Volumen ingrese el siguiente datos" << endl;
			cout << "ingrese el radio menor:" << endl;
			cin >> r;
			contador = 1;
			cout << "ingrese a - Intento #" << contador << endl;
			cin >> r;
			while ((contador<=2 && r<=0)) {
				contador = contador+1;
				cout << "ingrese a- Intento #" << contador << endl;
				cin >> r;
			}
			if ((r<=0)) {
				cout << "Ya agotó el total de intentos." << endl;
			} else {
				a = 4*M_PI*pow(r,2);
				cout << "A:" << a << endl;
				v = 4/3*M_PI*pow(r,3);
				cout << "Volumen:" << v << endl;
			}
			cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
				system("pause");
				system("cls");
			break; 
		case 5:
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
				system("pause");
				system("cls");
			break;
		case 6:
			// AREA
			// DATO DE ENTRADA
			cout << " ingrese el siguiente dato " << endl;
			cout << " ingrese a:" << endl;
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
				a = 5*pow(b,2)*sqrtf(3);
				cout << " Area:" << a << endl;
				// VOLUMEN
				v = (5/12)*(3+sqrtf(5))*pow(b,3);
				cout << " volumen:" << v << endl;
			}
			cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
				system("pause");
				system("cls");
			break;
		case 7:
			// AREA
			// DATO DE ENTRADA
			cout << " ingrese el siguiente dato " << endl;
			cout << " ingrese a:" << endl;
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
				a = 5*pow(b,2)*sqrtf(3);
				cout << " Area:" << a << endl;
				// VOLUMEN
				v = (5/12)*(3+sqrtf(5))*pow(b,3);
				cout << " volumen:" << v << endl;
			}
			cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
				system("pause");
				system("cls");
			break;
		case 8:
			// Datos de ingreso 
			cout << " Para calcular el area lateral de una piramide ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del perimetro de la base " << endl;
			cin >> p;
			cout << " Ingrese el valor del altura  " << endl;
			cin >> h;
			while ((p<=0 && h<=0)) {
				cout << "Ingrese el perimetro  base :" << endl;
				cin >> p;
				cout << " Ingrese la altura :" << endl;
				cin >> h;
			}
			// Fórmula del area lateral de una piramide
			al = (p*h)/2;
			cout << "AL = (P*H)/2" << endl;
			cout << " Area Lateral = " << al << " " << endl;
			// Area total 
			cout << " Ingrese el Ab para encontrar el Area Total " << endl;
			cin >> ab;
			while ((ab<=0)) {
				cout << " Ingrese el Ab para encontrar el Area Total " << endl;
				cin >> ab;
			}
			// ecuacion de area total
			at = al+ab;
			cout << " Area Total =" << at << endl;
			cout << " Encontrando volumen de la piramide " << endl;
			v = ab*h/3;
			cout << " Volumen =" << v << endl;
			cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
				system("pause");
				system("cls");
			break;
		case 9:
			// AREA LATERAL
			cout << "para encontrar el Area lateral ingrese los siguientes datos " << endl;
			cout << " Ingrese el perimetro  base :" << endl;
			cin >> p;
			cout << " Ingrese la altura :" << endl;
			cin >> h;
			while ((p<=0 && h<=0)) {
				cout << "Ingrese el perimetro  base :" << endl;
				cin >> p;
				cout << " Ingrese la altura :" << endl;
				cin >> h;
			}
			al = p*h;
			cout << " Area lateral :" << al << endl;
			// AREA TOTAL
			cout << "Ingrese A" << endl;
			cin >> b;
			while ((b<=0)) {
				cout << "Ingrese A" << endl;
				cin >> b;
			}
			at = al+2*b;
			cout << "Area total:" << at << endl;
			v = b*h;
			cout << "Volumen:" << v << endl;
			cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
				system("pause");
				system("cls");
			break;
		case 10:
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
				system("pause");
				system("cls");
			break;
		case 11:
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
			v = 1/3*M_PI*h*pow(r,2)+pow(t,2)+r*t;
			cout << "volumen = " << v << endl;
			cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
				system("pause");
				system("cls");
			break;
		case 12:
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
				system("pause");
				system("cls");
			break;
		case 13:
			cout << "Que tenga un buen dia " << endl;
				system("pause");
				system("cls");
			break;
		}
		cin.get();
	} while (f!=13);
	return 0;
}

