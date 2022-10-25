Algoritmo ejercicio26
	Definir N, pro, f como Entero;	
    pro <- 1;
    Escribir "MUESTRA EL PRODUCTO DE N NÚMEROS";
    Escribir Sin Saltar "CANTIDAD DE NÚMEROS : ";
    Leer N;    
    Para f <- 1 Hasta N con Paso 1 Hacer
        Escribir Sin Saltar f, "  ";
        pro <- pro * f;
    FinPara
    Escribir "";
    Escribir "PRODUCTO DE ",N," ES : ",pro ;
FinAlgoritmo
