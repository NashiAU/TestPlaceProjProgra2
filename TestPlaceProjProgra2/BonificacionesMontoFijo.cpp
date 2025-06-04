#include "BonificacionesMontoFijo.h"

BonificacionesMontoFijo::BonificacionesMontoFijo(double _bonificacion, double _salario)
{
    salario = _salario;
    bonificacion = _bonificacion;
}

double BonificacionesMontoFijo::calcularSalario() const
{
    return salario + bonificacion;
}
