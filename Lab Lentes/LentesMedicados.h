#pragma once
#include "Lentes.h"
class LentesMedicados :public Lentes
{
public:
	LentesMedicados(char, bool, bool);
	double getPrecio();
};

