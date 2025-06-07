#include "HorasOrdinariasDiurno.h"

HorasOrdinariasDiurno::HorasOrdinariasDiurno(double _horasTrabajadas, double _salario)
{
	if (_horasTrabajadas > 240) {
		horasExtras = true;
		horasExtrasTrabajadas = _horasTrabajadas - 240;
	}
	else {
		horasExtras = false;
		horasExtrasTrabajadas = 0;
	}
	salarioBase = _salario;
	horasTrabajadas = _horasTrabajadas;
}

double HorasOrdinariasDiurno::calcularSalarioPorHora() const
{
	return salarioBase / 240;
}

double HorasOrdinariasDiurno::calcularHorasExtras() const
{
	return horasExtrasTrabajadas * calcularSalarioPorHora() * 3/2;
}

double HorasOrdinariasDiurno::calcularSalario() const
{
	if(horasExtras) {
		return (240 * calcularSalarioPorHora()) + calcularHorasExtras();
	}
	return horasTrabajadas * calcularSalarioPorHora();
}
