#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
class Lentes
{
protected:
	char tipo;//n normal, l lujoso, p, popular
	bool proteccionUV;
	bool antireflejo;
	double precioBase;
public:
	Lentes(char, bool, bool, double);
	virtual double getPrecio();
	virtual string toString();
};

