Algoritmo Menu
	Definir user,password Como Caracter
	Definir i,a,b,Orden,Cantidad,c Como Real
	// usuario y contrase�a
	i <- 0
	a <- 0
	b <- 0
	c <- 0
	user <- 'dibengarcia'
	password <- 'Roentgenio111'
	// Verificaci�n de Identidad
	Mientras i<3 Hacer
		Escribir 'Ingrese su usuario:'
		Leer usuario
		Escribir 'Ingrese su contrase�a:'
		Leer contrase�a
		Si usuario=user Y contrase�a=password Entonces
			Escribir 'Bienvenido ',usuario
			i <- 3
			a <- a+1
		SiNo
			Escribir 'Usuario o contrase�a incorrecta'
		FinSi
		i <- i+1
	FinMientras
	// Mostrar men�
	Mientras a=1 Hacer
		Escribir 'Bienvenido al servicio de pedidos en linea de Fredbear Family Dinner'
		Escribir 'A continuaci�n se le mostrar� el men� y sus diferentes combos'
		Escribir 'Combo 1: Incluye hamburguesa peque�a, papas peque�as y soda peque�a. $3.75'
		Escribir 'Combo 2: Incluye hamburguesa mediana, papas medianas y soda mediana. $5.50'
		Escribir 'Combo 3: Incluye hamburguesa grande, papas grandes y soda grande. $7.25'
		a <- a+1
		b <- 1
	FinMientras
	// Selecci�n de combo
	Mientras b=1 Hacer
		Escribir 'Por favor seleccione su combo Combo 1 [1], Combo 2 [2], Combo 3 [3]'
		Leer Orden
		Segun Orden  Hacer
			1:
				Escribir 'Ingrese la cantidad de Ordenes que desea'
				Leer Cantidad
				Si Cantidad<1 Entonces
					Escribir 'Ingrese una cantidad v�lida'
				SiNo
					Precio <- Cantidad*3.75
					Escribir 'El costo es de: ',Precio,'$'
				FinSi
			2:
				Escribir 'Ingrese la cantidad de Ordenes que desea'
				Leer Cantidad
				Si Cantidad<1 Entonces
					Escribir 'Ingrese una cantidad v�lida'
				SiNo
					Precio <- Cantidad*5.50
					Escribir 'El costo es de: ',Precio,'$'
				FinSi
			3:
				Escribir 'Ingrese la cantidad de Ordenes que desea'
				Leer Cantidad
				Si Cantidad<1 Entonces
					Escribir 'Ingrese una cantidad v�lida'
				SiNo
					Precio <- Cantidad*7.25
					Escribir 'El costo es de: ',Precio,'$'
				FinSi
			De Otro Modo:
				Escribir 'Ingrese Un valor v�lido'
		FinSegun
		Escribir '�Desea realizar un pedido extra? si [s], no [n]'
		// Pedido extra?
		Leer Respuesta
		Si Respuesta='s' Entonces
			b <- 1
		SiNo
			b <- b+1
		FinSi
	FinMientras
FinAlgoritmo
