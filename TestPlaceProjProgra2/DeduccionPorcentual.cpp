#include "DeduccionPorcentual.h"

DeduccionPorcentual::DeduccionPorcentual(double _salario, double _porcentaje)
{
	salario = _salario;
	porcentaje = _porcentaje;
}

double DeduccionPorcentual::calcularDeducciones() const
{
	return salario * (porcentaje/100);
}
