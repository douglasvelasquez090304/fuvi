/*
Nombre del archivo: estructurafor.cpp
Autor: Douglas Velasquez
Lugar ITV
Instrucciones: ejemplo de estructura de condicion de multiple for
*/
#include<iostream>
#include<cstdlib> //C standard librery
#include<ctime>

using namespace std;

int main (){
	int num,aleatorio;
	cout << "Ingrese un numero : ";
	cin >> num; 
	for(int i =1 ;i<=num ;i++){
		srand (time(nullptr));
			aleatorio = rand() % 10;
		if (aleatorio % 2 == 0){
			cout << aleatorio << " ";
		}else{
			cout << aleatorio << " No es par." << endl;
		}
		
	}
	cout <<"Fin del programa.";
	return 0;
}