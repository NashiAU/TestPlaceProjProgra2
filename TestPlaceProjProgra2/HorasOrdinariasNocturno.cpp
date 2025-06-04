#include "HorasOrdinariasNocturno.h"

HorasOrdinariasNocturno::HorasOrdinariasNocturno(double _horasTrabajadas, double _salario)
{
	if (_horasTrabajadas > 180) {
		horasExtras = true;
		horasExtrasTrabajadas = _horasTrabajadas - 180;
	}
	else {
		horasExtras = false;
		horasExtrasTrabajadas = 0;
	}
	salario = _salario;
	horasTrabajadas = _horasTrabajadas;
}
double HorasOrdinariasNocturno::calcularSalarioPorHora() const
{
	return salario / 180;
}
double HorasOrdinariasNocturno::calcularHorasExtras() const
{
	return horasExtrasTrabajadas * calcularSalarioPorHora() * (3/2) * (8/6);
}
double HorasOrdinariasNocturno::calcularSalario() const
{
	if (horasExtras) {
		return (180 * calcularSalarioPorHora()) + calcularHorasExtras();
	}
	return horasTrabajadas * calcularSalarioPorHora();
}