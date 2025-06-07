#include "BonificacionesPorcentuales.h"

BonificacionesPorcentuales::BonificacionesPorcentuales(double _porcientoBonificacion, double _salario) {
    salarioBase = _salario;
    porcientoBonificacion = _porcientoBonificacion;
}

double BonificacionesPorcentuales::calcularPorcentajeBonificacion() const {
    return (salarioBase * porcientoBonificacion) / 100;
}

double BonificacionesPorcentuales::calcularSalario() const {
    return salarioBase + calcularPorcentajeBonificacion();
}
