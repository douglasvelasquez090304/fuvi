Algoritmo ejercicio32
	Definir a, b, x, maximo Como Entero
	Escribir "Ingresa dos números"
	Leer a, b
	si a > 0 y b > 0 Entonces
		maximo = 1
		x = 1
		Mientras x <= a Hacer
			si a mod x == 0 y b mod x == 0 Entonces
				si x > maximo Entonces
					maximo = x
				FinSi
			FinSi
			x = x + 1
		FinMientras
		Escribir "El máximo común divisor es: ",maximo
	sino 
		Escribir "Debes ingresar números mayores a cero"
	FinSi
	escribir "Espero que la haya gustado nuestra aplicacion <3"
FinAlgoritmo
