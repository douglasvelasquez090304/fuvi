/*
Nombre del archivo: adivinanza.cpp
Autor: Douglas Velasquez
Lugar ITV
Instrucciones: crear un algoritmo que genere num aleatorio
*/
# include<iostream>
#include<cstdlib> //C standard librery
#include<ctime>

using namespace std;

int main (){
 srand(time(nullptr));
 int aleatorio = rand() % 10;
 int num,intentos = 1;
  do{
   cout <<"Adivine un numero entre 0 y 10" <<endl; 
    cin >> num; 
       if (num==aleatorio){
 	       cout <<"Felicidades, acerto.";
 	       intentos =4;
 	
         }else {
 	        cout<< "Numero incorrecto"<<endl;
 	     if(intentos = 3){
 		   cout <<"Ud ha agotado todos sus intentos" <<endl;
 		
	 }
	 intentos ++;
 	
 }
 	
}
return 0;
}