Algoritmo  ejercicio22
	Definir a Como Entero
	Escribir "Ingresa un año"
	leer a
	si a mod 4 == 0 Entonces
		si a mod 100 == 0 Entonces
			si a mod 400 == 0 Entonces
				Escribir "El año ",a," es bisiesto"
			sino
				Escribir "El año ",a," no es bisiesto"
			FinSi
		sino 
			Escribir "El año ",a," es bisiesto"
		FinSi
	sino 
		Escribir "El año ",a," no es bisiesto"
	FinSi
	escribir "Espero que la haya gustado nuestra aplicacion <3"
FinAlgoritmo
