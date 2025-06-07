#pragma once
#include "IIngresos.h"

class HorasOrdinariasMixta : public IIngresos{
private:
	double salarioBase;
	double horasTrabajadas;
	bool horasExtras;
	double horasExtrasTrabajadas;
public:
	HorasOrdinariasMixta(double = 210, double = 399203.69);
	double calcularSalarioPorHora() const;
	double calcularHorasExtras() const;
	double calcularSalario() const override;
};

