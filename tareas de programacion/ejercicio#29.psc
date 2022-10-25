Algoritmo ejercicio29
	Definir a,b,c Como Entero
	Escribir "Ingresa 3 números"
	leer a,b,c
	si a == (b+c) Entonces
		Escribir "El numero ",a," es la suma de ",b," + ",c
		
	SiNo
		si b == (a + c) Entonces
			Escribir "El numero ",b," es la suma de ",a," + ",c
			
		SiNo
			si c == (a + b) Entonces
				Escribir "El numero ",c," es la suma de ",a," + ",b
				
			SiNo
				Escribir "Ningún numero es igual a la suma de los otros dos "
			FinSi
		FinSi
	FinSi
	ESCRIBIR "Espero que nuestra aplicacion le haya ayudado <3"
FinAlgoritmo
