#pragma once
#include "IDeducciones.h"
class DeduccionFija : public IDeducciones{
private:
	double cantidad;
public:
	DeduccionFija(double = 399203.69, double = 0);
	double calcularDeducciones() const override;
};

