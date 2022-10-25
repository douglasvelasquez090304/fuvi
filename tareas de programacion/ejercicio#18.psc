Algoritmo ejercicio18
	definir d, m, a como entero
	definir nombreMes Como Caracter
	// datos de entrada 
	escribir "Ingrese un numero: "
	leer d
	escribir "Ingrese un numero: "
	leer m
	escribir "Ingrese numeros: "
	leer a
	//operaciones 
	si d<0 o d>31
		Repetir
			escribir "Numero equivocado"
			Escribir "Ingrese un numero: "
		Hasta Que d>0 y d<=31
	FinSi
	si m<0 o m>12
		Repetir
			escribir "Numero equivocado"
			Escribir "Ingrese un numero: "
		Hasta Que m>0 y m<=12
	FinSi
	si a<0 
		Repetir
			escribir "Numeros equivocado"
			Escribir "Ingrese numeros: "
		Hasta Que a>0 
	FinSi
	segun m Hacer
		caso 1: nombreMes="Enero"
		caso 2: nombreMes="Febrero"
		caso 3: nombreMes="Marzo"
		caso 4: nombreMes="Abril"
		caso 5: nombreMes="Mayo"
		caso 6: nombreMes="Junio"
		caso 7: nombreMes="Julio"
		caso 8: nombreMes="Agosto"
		caso 9: nombreMes="Septiembre"
		caso 10: nombreMes="Octubre"
		caso 11: nombreMes="Noviembre"
		caso 12: nombreMes="Diciembre"
	FinSegun
	Escribir d " de " nombreMes " del " a 
	escribir "Espero que la haya gustado nuestra aplicacion <3"
FinAlgoritmo
