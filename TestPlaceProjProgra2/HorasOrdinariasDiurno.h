#pragma once
#include "IIngresos.h"

class HorasOrdinariasDiurno : public IIngresos{
private:
	double salarioBase;
	double horasTrabajadas;
	bool horasExtras;
	double horasExtrasTrabajadas;
public:
	HorasOrdinariasDiurno(double = 240, double = 399203.69);
	double calcularSalarioPorHora() const;
	double calcularHorasExtras() const;
	double calcularSalario() const override;
	
};

