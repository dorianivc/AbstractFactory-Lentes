#include "LentesMedicados.h"

LentesMedicados::LentesMedicados(char t, bool UV, bool AR):Lentes(t,UV,AR,30000)
{
	if (tipo == 'n') {
		precioBase = 40000;
	}
	else if (tipo = 'l') {
		precioBase = 50000;
	}
}

double LentesMedicados::getPrecio()
{
	double precio = 0;
	if (antireflejo) {
		precio = (precioBase * 0.30);
	}
	if (proteccionUV) {
		precio = (precioBase * 0.30) + precio;
	}
	double total = precio + precioBase;
	return total;
}
