Algoritmo ejercicio10
	Escribir "�Tienes el titulo de bachiller?"
	
	Leer bachiller
	
	si (bachiller="si") Entonces
		
		Escribir "Puedes acceder al grado superior"
		
	Sino
		
		Escribir "�Tienes la prueba de acceso superada?"
		
		Leer prueba_acceso
		
		si (prueba_acceso="si") Entonces
			
			Escribir "Puedes acceder al grado superior"
			
		Sino
			
			Escribir "No puedes acceder a un grado superior"
			
		FinSi
		
	FinSi
	
	
	
	
		
		Escribir "�Tienes el titulo de bachiller?"
		
		Leer bachiller
		
		si (bachiller="si") Entonces
			
			Escribir "Puedes acceder al grado superior"
			
		Sino
			
			Escribir "�Tienes la prueba de acceso superada?"
			
			Leer prueba_acceso
			
			si (prueba_acceso="si") Entonces
				
				Escribir "Puedes acceder al grado superior"
				
			Sino
				
				Escribir "No puedes acceder a un grado superior"
				
			FinSi
			
		FinSi
		escribir "Espero que la haya gustado nuestra aplicacion <3"
FinAlgoritmo
