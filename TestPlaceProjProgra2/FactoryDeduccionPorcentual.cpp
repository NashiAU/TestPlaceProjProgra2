#include "FactoryDeduccionPorcentual.h"

DeduccionPorcentual* FactoryDeduccionPorcentual::crear(double _salario, double _porciento)
{
    return new DeduccionPorcentual(_salario, _porciento);
}
