/*
Nombre del archivo: estructurafor.cpp
Autor: Douglas Velasquez
Lugar ITV
Instrucciones: ejemplo de estructura de condicion de multiple for
*/
#include<iostream>

using namespace std;

int main (){
	int tabla;
	cout << "Cual tabla de multiplicar desea mostrar: ";
	cin >> tabla; 
	for(int i =1 ;i< 11 ;i++){
		cout << tabla << "X" <<i <<" = " << tabla*i << endl;
	}
	return 0;
}