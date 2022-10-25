Algoritmo ejercicio14
	Definir total,x Como Entero
	
	Definir n,suma,media Como Real
	Escribir "Ingresa el total de número"
	leer total 
	x = 1
	
	suma = 0
	Mientras x <= total Hacer
		Escribir "Ingresa el numero ",x
		leer n
		suma = suma + n
		x = x + 1
	FinMientras
	media = suma / total
Escribir "La media aritmética es: ",media
FinAlgoritmo
