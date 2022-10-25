Algoritmo ejercicio27
	
	Definir distancia Como Real
	Definir dias Como Entero
	Definir precioDeida Como Real
	Definir precioDeregreso Como Real
	Definir precioTotal Como Real
	Definir descuento Como Real
	
	Escribir "Ingrese los dias de estancia"
	Leer dias
	
	Escribir "Ingrese la distancia del viaje"
	Leer distancia
	
	precioTotal <- dias * 89.50
	
	Si dias Es Mayor Que 7 Y distancia Es Mayor Que 1000 Entonces
		descuento <- (precioTotal * 0.3)
		precio_total <- precio_total - descuento
	FinSi
	
	precioDeida = precioTotal / 2
	precioDeregreso = precioTotal / 2
	
	Escribir "Precio de Ida: ", precioDeida
	Escribir "Precio de regreso: ", precioDeregreso
	Escribir "Descuento: ", descuento
	ESCRIBIR "Espero que nuestra aplicacion le haya ayudado <3"
FinAlgoritmo
