/*
Nombre del archivo: estructurawhile.cpp
Autor: Douglas Velasquez
Lugar ITV
Instrucciones: ejemplo de estructura repetitiva while
*/
# include <iostream>

using namespace std;

int main (){
int edad;
cout <<"Ingrese su nombre: ";
getline(cin,nombre);
cout << "\nIngrese su edad: "
cin >> edad;
 while (edad<18){
 	cout <<"Ingrese su edad "
 	cin >> edad; 
 }
 cout << "Bienvenido, " nombre << endl;
 cout <<"Fin de la aplicacion. "

return 0;
}