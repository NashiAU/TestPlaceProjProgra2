#pragma once
#include "IIngresos.h"
class HorasFeriadoLaborado : public IIngresos {
private:
	double horasTrabajadas;
	bool horasExtras;
	double horasExtrasTrabajadas;
public:
	HorasFeriadoLaborado(double = 8, double = 399203.69);
	double calcularSalarioPorHora() const;
	double calcularHorasExtras() const;
	double calcularSalario() const override;
};

