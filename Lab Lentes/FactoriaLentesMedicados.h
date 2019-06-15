#pragma once
#include "LentesMedicados.h"
class FactoriaLentesMedicados
{
public:
	FactoriaLentesMedicados();
	Lentes* fabricarLenteMedicado(char, bool, bool);
};

