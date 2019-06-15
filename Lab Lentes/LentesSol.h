#pragma once
#include "Lentes.h"
class LentesSol :public Lentes
{
public:
	LentesSol(char, bool, bool);
	double getPrecio();
};

