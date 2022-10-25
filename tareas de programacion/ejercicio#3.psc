Algoritmo ejercicio3
	definir a,b,c,n como entero
	escribir"Ingrese el total de los numeros:"
	leer T
	x=1
	Mientras X<= T  Hacer
		ESCRIBIR "Ingrese un numero"
		leer n 
		Si x==1 Entonces
			a=n
			b=n
		SiNo
			Si n>a Entonces
				a=n
			SiNo
				Si n>b Entonces
					b=n
				
				Fin Si
			Fin Si
		Fin Si
		x= X+1
	Fin Mientras
	ESCRIBIR "El numero mayor es: " a
	escribir "El numero menor es: " b
	escribir "Gracia por usar nuestra aplicacion <3"
FinAlgoritmo
