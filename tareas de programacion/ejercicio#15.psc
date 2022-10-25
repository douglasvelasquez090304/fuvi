Algoritmo ejercicio15
	
	Definir contador Como Entero
	
	Definir contraseña Como Caracter
	
	contador = 1
	
	Mientras contador <= 3 Hacer
		
		Escribir "Ingresa una contraseña"
		
		leer contraseña
		
		si contraseña == "tuani"  Entonces
			
			Escribir "La contraseña es correcta"
			
			contador = 4
			
		SiNo
			
			si contador == 3 Entonces
				
				Escribir "Has fallado los 3 intentos"
				
			SiNo
				
				Escribir "La contraseña es incorrecta"
				
			FinSi
			
		FinSi
		
		contador = contador + 1
		
	FinMientras
	escribir "Espeero que la haya gustado nuestra aplicacion <3"
Fin Algoritmo
