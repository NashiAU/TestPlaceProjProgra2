#include "FactoryDeduccionesPermanentes.h"

DeduccionesPermanentes* FactoryDeduccionesPermanentes::crear(double _salario, double x)
{
	return new DeduccionesPermanentes(_salario);
}
