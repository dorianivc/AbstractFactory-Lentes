#include "LentesSol.h"

LentesSol::LentesSol(char tipo, bool UV, bool ar) :Lentes(tipo, UV, ar, 20000)
{
	if (tipo = 'n') {
		precioBase = 30000;
	}
	else if (tipo = 'l') {
		precioBase = 40000;
	}
}
double LentesSol::getPrecio()
{
	double precio=0;
	if (antireflejo) {
		precio = (precioBase * 0.20);
	}
	if (proteccionUV) {
		precio = (precioBase * 0.20)+ precio;
	}
	double total = precio + precioBase;
	return total;
}
