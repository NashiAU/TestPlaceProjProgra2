#include "HorasFeriadoLaborado.h"

HorasFeriadoLaborado::HorasFeriadoLaborado(double _horasTrabajadas, double _salario)
{
	if (_horasTrabajadas > 8) {
		horasExtras = true;
		horasExtrasTrabajadas = _horasTrabajadas - 8;
	}
	else {
		horasExtras = false;
		horasExtrasTrabajadas = 0;
	}
	salario = _salario;
	horasTrabajadas = _horasTrabajadas;
}
double HorasFeriadoLaborado::calcularSalarioPorHora() const
{
	return salario / 240;
}
double HorasFeriadoLaborado::calcularHorasExtras() const
{
	return horasExtrasTrabajadas * calcularSalarioPorHora() * 3;
}
double HorasFeriadoLaborado::calcularSalario() const
{
	if (horasExtras) {
		return (8 * calcularSalarioPorHora()) + calcularHorasExtras();
	}
	return horasTrabajadas * calcularSalarioPorHora();
}