#include "HorasOrdinariasMixta.h"

HorasOrdinariasMixta::HorasOrdinariasMixta(double _horasTrabajadas, double _salario)
{
	if (_horasTrabajadas > 210) {
		horasExtras = true;
		horasExtrasTrabajadas = _horasTrabajadas - 210;
	}
	else {
		horasExtras = false;
		horasExtrasTrabajadas = 0;
	}
	salarioBase = _salario;
	horasTrabajadas = _horasTrabajadas;
}
double HorasOrdinariasMixta::calcularSalarioPorHora() const
{
	return salarioBase / 210;
}
double HorasOrdinariasMixta::calcularHorasExtras() const
{
	return horasExtrasTrabajadas * calcularSalarioPorHora() * (3 / 2) * (8 / 7);
}
double HorasOrdinariasMixta::calcularSalario() const
{
	if (horasExtras) {
		return (210 * calcularSalarioPorHora()) + calcularHorasExtras();
	}
	return horasTrabajadas * calcularSalarioPorHora();
}
