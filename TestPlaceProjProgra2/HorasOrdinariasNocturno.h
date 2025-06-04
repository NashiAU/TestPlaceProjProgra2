#pragma once
#include "IIngresos.h"

class HorasOrdinariasNocturno : public IIngresos{
private:
	double horasTrabajadas;
	bool horasExtras;
	double horasExtrasTrabajadas;
public:
	HorasOrdinariasNocturno(double = 180, double = 399203.69);
	double calcularSalarioPorHora() const;
	double calcularHorasExtras() const;
	double calcularSalario() const override;
};

