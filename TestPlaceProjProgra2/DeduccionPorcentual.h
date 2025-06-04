#pragma once
#include "IDeducciones.h"
class DeduccionPorcentual : public IDeducciones{
private:
	double porcentaje;
public:
	DeduccionPorcentual(double = 399203.69, double = 0);
	double calcularDeducciones() const override;
};

