Algoritmo ejercicio17
	Definir x,a,b Como Entero
	x = 1
	a = 0
	b = 0
	//calculos para determinar 
	Mientras x <= 100 Hacer
		si x mod 2 == 0 Entonces
			Escribir "Multiplicacion de 2:" x
			a = a + 1
			
		SiNo   
			si x mod 3 == 0 Entonces
				Escribir  "Multiplicacion de 3:" x
				b = b + 1
			FinSi
		FinSi
		x = x + 1
	FinMientras
	// datos de saloda 
	escribir "#########################################"
	Escribir "N�meros m�ltiplos de 2: ",a
	Escribir "N�meros m�ltiplos de 3: ",b 
	escribir "Espero que la haya gustado nuestra aplicacion <3"
FinAlgoritmo
