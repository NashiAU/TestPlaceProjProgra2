#pragma once
#include "IIngresos.h"
class BonificacionesPorcentuales : public IIngresos{
private:
	double salarioBase;
	double porcientoBonificacion;
public:
	BonificacionesPorcentuales(double = 0, double = 399203.69);
	double calcularPorcentajeBonificacion() const;
	double calcularSalario() const override;
};

