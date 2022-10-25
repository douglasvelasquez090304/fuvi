Algoritmo ejercicio41
	repetir
		LIMPIAR PANTALLA
		MOSTRAR "Eliga una opción"
		
		Escribir " 1. Gasolina Regular: C$32.85"
		Escribir " 2. Gasolina Súper: C$33.48"
		Escribir " 3. Gasolina Diesel: C$28.45"
		
		
		Escribir SIN SALTAR "ELIJA UNA OPCION"
		LEER OP
		SEGUN OP HACER
			1:
				Escribir sin saltar "Cuantos litros desea: "
				leer l
				escribir ""
				
				f = l*32.85
				
				Escribir "Su costo sera: " f
				
			2:
				Escribir sin saltar "Cuantos litros desea: "
				leer l
				escribir ""
				
				n=l*33.48
				Escribir "Su costo sera: " n
				
			3:  
				Escribir sin saltar "Cuantos litros desea: "
				leer l
				escribir ""
				h = l*28.45
				Escribir "Su costo sera: " h
		
				
		FinSegun
		
		
	HASTA QUE OP = 3
	escribir "Espero que la haya gustado nuestra aplicacion <3"
FinAlgoritmo
