#include "FactoriaLentesSol.h"

FactoriaLentesSol::FactoriaLentesSol()
{
}

Lentes* FactoriaLentesSol::fabricarLenteSol(char tipo , bool proteccionUV, bool antiReflejo)
{
	return new LentesSol(tipo, proteccionUV, antiReflejo);
}
