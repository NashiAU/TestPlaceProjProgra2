#pragma once
#include "IIngresos.h"
class BonificacionesMontoFijo:public IIngresos{
private:
	double bonificacion;
public:
	BonificacionesMontoFijo(double = 0, double = 399203.69);
	double calcularSalario() const override;
};

