#include "FactoryDeduccionFija.h"

DeduccionFija* FactoryDeduccionFija::crear(double _salario, double _cantidad)
{
    return new DeduccionFija(_salario, _cantidad);
}
