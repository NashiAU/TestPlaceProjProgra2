#include "DeduccionFija.h"

DeduccionFija::DeduccionFija(double _salario, double _cantidad){
	salario = _salario;
	cantidad = _cantidad;
}

double DeduccionFija::calcularDeducciones() const
{
	return salario - cantidad;
}
