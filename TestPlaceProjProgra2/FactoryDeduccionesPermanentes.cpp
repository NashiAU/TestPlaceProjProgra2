#include "FactoryDeduccionesPermanentes.h"

DeduccionesPermanentes* FactoryDeduccionesPermanentes::crear(double _salario)
{
	return new DeduccionesPermanentes(_salario);
}
