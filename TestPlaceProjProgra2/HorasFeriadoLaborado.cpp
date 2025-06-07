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
	salarioBase = _salario;
	horasTrabajadas = _horasTrabajadas;
}
double HorasFeriadoLaborado::calcularSalarioPorHora() const
{
	return salarioBase / 240;
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