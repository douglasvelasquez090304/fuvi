/*
Nombre del archivo: estructuraswitch.cpp
Autor: Douglas Velasquez
Lugar ITV
Instrucciones: ejemplo de estructura de condicion de multiple switch
*/
#include<iostream>

using namespace std;

int main (){

cout << "Menu de opciones: " << endl;
cout <<"1- Computadoras\n2- Smartphones\n3- Tablets\n4- salir" <<endl;
cout <<"Selecciones una opcion: ";
int op;
cin >> op;
int op
  switch(op){
  
	case 1:
		cout <<"Ustede ha selecionado Computadoras" <<endl;
		cout <<"Que tipo de computadora desea comprar: ";
		cout <<"1- Desktop\n2- Laptop";
		cin >> op1;
		switch(op1){
			case 1:
				cout <<"Cantidad a comprar: ";
				cin >> cant;
				precio = 550.99;
				cout <<"El monto a pagar " << cant*precio*1.15 << endl;
				case 2: 
				cout <<"Usted ha selecionado una laptop";
				cin >> cant;
				precio = 350.99;
				cout <<"El monto a pagar " << cant*precio*1.15 << endl;
			}
		}
		break;
		
	case 2:
		cout <<"Ustede ha selecionado Smartphones" <<endl;
			cout <<"Que tipo de Smartphones desea comprar: ";
		cout <<"1- Gama baja\n2- Gama media\n3- Gama alta";
			cout <<"1- Desktop\n2- Laptop";
		cin >> op1;
		switch(op2){
			case 1:
				cout<< "Uted ha seleccionado un Gama baja." <<endl;
				cout <<"Cantidad a comprar: "
				cin >> cant;
				precio = 100.99;
				cout <<"El monto a pagar " << cant*precio*1.15 << endl;
				case 2: 
				cout << "Usted ha seleccionado un Gama madia." endl;
				cout << "Cantidad a comprar: ";
				cin >> cant;
				precio = 350.99;
				cout <<"El monto a pagar " << cant*precio*1.15 << endl;
				case 3: 
				cout << "Usted ha seleccionado un Gama madia." endl;
				cout << "Cantidad a comprar: ";
				cin >> cant;
				precio = 999.99;
				cout <<"El monto a pagar " << cant*precio*1.15 << endl;
		break;
	case 3:
		cout <<"Ustede ha selecionado Tablets" <<endl;
		switch(op3){
			case 1:
				cout<< "Uted ha seleccionado un Gama baja." <<endl;
				cout <<"Cantidad a comprar: "
				cin >> cant;
				precio = 100.99;
				cout <<"El monto a pagar " << cant*precio*1.15 << endl;
				case 2: 
				cout << "Usted ha seleccionado un Gama madia." endl;
				cout << "Cantidad a comprar: ";
				cin >> cant;
				precio = 350.99;
				cout <<"El monto a pagar " << cant*precio*1.15 << endl;
				case 3: 
				cout << "Usted ha seleccionado un Gama madia." endl;
				cout << "Cantidad a comprar: ";
				cin >> cant;
				precio = 999.99;
				cout <<"El monto a pagar " << cant*precio*1.15 << endl;
		break;
	case 4:
		cout <<"Ustede ha salido de la aplicacion." <<endl;
		break;
		default:
			cout <<"Opcion incorrecta." << endl;
}
cout << "Fin de la aplicacion " << endl;






return 0;
}