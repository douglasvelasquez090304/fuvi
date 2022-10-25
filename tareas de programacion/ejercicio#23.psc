Algoritmo ejercicio23
	BOCADILLO=1.5
	REFRESCO=1.05
	CERVEZA=0.75
	total=0
	Escribir "Introduce la cantidad de bocadillos de jamon"
	Leer cant_V
	Escribir "Introduce la cantidad de refresco"
	Leer cant_refresco
	Escribir "Introduce la cantidad de cerveza"
	Leer cant_cerveza
	//NOTA: los dos siguientes van en una linea
	total<-((cant_V*BOCADILLO)+(cant_refresco*REFRESCO)+(cant_cerveza*CERVEZA))
	Escribir total "C$"
FinAlgoritmo
