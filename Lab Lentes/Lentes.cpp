#include "Lentes.h"

Lentes::Lentes(char t, bool UV, bool AR, double preci)
{
	tipo = t;
	proteccionUV = UV;
	antireflejo = AR;
	precioBase = preci;
}

double Lentes::getPrecio()
{
	return precioBase;
}

string Lentes::toString()
{
	stringstream p;
	p << "Tipo de Lente: " << tipo << endl;
	p << "Proteccion Ultra Violeta: "; if (proteccionUV) {
		p << "SI" << endl;
	}
	else {
		p << "NO" << endl;
	}
	p << "Proteccion Antireflejo: "; if (antireflejo) {
		p << "SI" << endl;
	}
	else {
		p << "NO" << endl;
	}
	return p.str();
}
