#pragma once
#include "IDeducciones.h"
class DeduccionesPermanentes : public IDeducciones{
public:
	DeduccionesPermanentes(double = 399203.69);
	double calcularCCSS() const;
	double calcularRenta() const;
	double calcularDeducciones() const override;
};

