Algoritmo ejercicio43
	repetir
		LIMPIAR PANTALLA
		MOSTRAR "Datos de personas"
		
		Escribir " 1. DATO de persona #1"
		Escribir " 2. DATO de persona #2"
		Escribir " 3. DATO de persona #3"
		Escribir " 4. DATO de persona #4"
		Escribir " 5. DATO de persona #5"
		Escribir " 6. DATO de persona #6"
		
		Escribir SIN SALTAR "ELIJA UNA OPCION"
		LEER OP
		SEGUN OP HACER
			1:
				Escribir sin saltar "Maria antonia "
				escribir ""
				
				Escribir sin saltar "altura: 1.50m"
				escribir ""
				
				Escribir sin saltar "peso: 60Kg"
				escribir ""
				Escribir "Numero de telefono: 4632-56778"
				escribir ""
				f = 60/1.50^2
				
				Escribir "persona con sobre peso: " f
				
			2:
				Escribir sin saltar "Roberto mendez "
				escribir ""
				
				Escribir sin saltar "altura: 1.80m"
				escribir ""
				
				Escribir sin saltar "peso: 86Kg"
				escribir ""
				
				Escribir sin saltar "Numero de telefono: 5890-1202"
				escribir ""
				
				n= 86/1.80^2
				Escribir "Esta persona es obesa " n
			3:   escribir ""
				
				Escribir sin saltar "Manuela ramos "
				escribir ""
				
				Escribir sin saltar "altura: 1.70m"
				escribir ""
				
				Escribir sin saltar "peso: 90Kg"
				escribir ""
				
				Escribir sin saltar "Numero de telefono: 7090-3254"
				escribir ""
				h = 90/1.70^2
			
			4:	Escribir "Esta persona tiene sobre peso " h
				
				 Escribir sin saltar "Ana maria "
				 escribir ""
				 
				 Escribir sin saltar "altura: 1.50m"
				 escribir ""
				 
				 Escribir sin saltar "peso: 50Kg"
				 escribir ""
				 Escribir "Numero de telefono: 4638-56708"
				 escribir ""
				 t = 50/1.50^2
				 
				 Escribir "persona con un peso no recomendado: " t
				 
				5: Escribir sin saltar "Pedro Marmol  "
				 escribir ""
				 
				 Escribir sin saltar "altura: 2m"
				 escribir ""
				 
				 Escribir sin saltar "peso: 90Kg"
				 escribir ""
				 Escribir "Numero de telefono: 4432-50778"
				 escribir ""
				 p = 90/2^2
				 
				 Escribir "persona con peso normal: " p
				 
			 6: Escribir sin saltar "Naruto perez "
				 escribir ""
				 
				 Escribir sin saltar "altura: 1.90m"
				 escribir ""
				 
				 Escribir sin saltar "peso: 90Kg"
				 escribir ""
				 Escribir "Numero de telefono: 5532-50778"
				 escribir ""
				 w = 90/1.90^2
				 
				 Escribir "persona con sobrepeso: " w
				 
		FinSegun
		
		Escribir "Presione enter para continuar"
		Esperar Tecla
	HASTA QUE OP = 6
	escribir "Espero que la haya gustado nuestra aplicacion <3"
FinAlgoritmo
