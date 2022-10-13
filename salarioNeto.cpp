/*
Nombre del archivo: salarioneto.cpp
Autor: Douglas Velasquez 
Lugar: ITV
Instrucciones: Ejemplo de programación estructurada

*/
#include<iostream>
#include<iomanip>
#include<string>
#include<stdlib.h>

using namespace std;
//Variables globales - Constantes
const double TASA_ANTIGUEDAD = 15;
const double TASA_SINDICATO = 1;
const double TASA_INSS = 7;
const double TASA_IR = 15.6;
const double TASA_INSS_PATRONAL = 22.5;
int main(){
	//Declaración de variables - Locales
	double salarioBasico, ingresoNeto, ingresoTotal, deduccionesTotales;
	double ingresoAntiguedad, montoSindicato, montoINSS, montoIR, montoINSSPatronal, tasaIR;
	string nombre;
	//Pedir datos al usuario
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << "Hola " << nombre << ", ingrese su salario básico: C$ ";
	cin >> salarioBasico;
	
	system ("CLS");
	
	//Calcular los ingresos
	ingresoAntiguedad = salarioBasico * (TASA_ANTIGUEDAD/100);
	ingresoTotal = salarioBasico + ingresoAntiguedad;
	//Calcular las deducciones al empleado
	montoSindicato = salarioBasico  * (TASA_SINDICATO/100);
	montoINSS = ingresoTotal * (TASA_INSS/100);
	montoIR = ingresoTotal * (TASA_IR/100);
	deduccionesTotales = montoSindicato + montoINSS + montoIR;
	//Calcular ingreso o salario neto
	ingresoNeto = ingresoTotal - deduccionesTotales;
	//Calcular las deducciones al empleador
	montoINSSPatronal = ingresoTotal * (TASA_INSS_PATRONAL/100);
	//Mostrar resultados
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	//muestra de resultados
	cout<<"hola "<<setw(5)<<nombre<<setw(15)<<"  estas son tus cuentas:"<<endl;
	cout<<"el ingreso total es de "<<setw(10)<<right<<ingresoTotal<<"C$"<<endl;
	
	
	cout<<"_________________________DEDUCCIONES__________________-"<<endl;
	cout<<"tus deducciones totales son: "<<setw(8)<<right<<deduccionesTotales<<"C$"<<endl;
	cout<<setw(12)<<"correspondientes a:"<<endl;
	cout<<"deduccion del sindicato:"<<setw(8)<<right<<montoSindicato<<"C$"<<endl;
	cout<<"deduccion del inss  :"<<setw(14)<<right<<montoINSS<<"C$"<<endl;
	cout<<"deduccion de la tasa ir:"<<setw(8)<<right<<tasaIR<<"C$"<<endl;
	
		cout<<"_________________________ingreso neto__________________-"<<endl;
	cout<<"tu ingreso neto es igual a: "<<setw(8)<<right<<ingresoNeto<<"C$"<<endl;
	return 0;
}