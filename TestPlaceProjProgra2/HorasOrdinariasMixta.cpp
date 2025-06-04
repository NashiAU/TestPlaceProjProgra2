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
	salario = _salario;
	horasTrabajadas = _horasTrabajadas;
}
double HorasOrdinariasMixta::calcularSalarioPorHora() const 
{
	return salario / 210;
}
double HorasOrdinariasMixta::calcularHorasExtras() const
{
	return horasExtrasTrabajadas * calcularSalarioPorHora() * (3/2) * (8/7);
}
double HorasOrdinariasMixta::calcularSalario() const
{
	if (horasExtras) {
		return ( 210 * calcularSalarioPorHora()) + calcularHorasExtras();
	}
	return horasTrabajadas * calcularSalarioPorHora();
}
