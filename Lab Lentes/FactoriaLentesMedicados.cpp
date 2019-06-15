#include "FactoriaLentesMedicados.h"

FactoriaLentesMedicados::FactoriaLentesMedicados()
{
}

Lentes* FactoriaLentesMedicados::fabricarLenteMedicado(char t, bool UV, bool AR)
{
	return new LentesMedicados(t, UV, AR);
}
