#include "BonificacionesMontoFijo.h"

BonificacionesMontoFijo::BonificacionesMontoFijo(double _bonificacion, double _salario)
{
    salarioBase = _salario;
    bonificacion = _bonificacion;
}

double BonificacionesMontoFijo::calcularSalario() const
{
    return salarioBase + bonificacion;
}
