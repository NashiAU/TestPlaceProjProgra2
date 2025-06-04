#include "BonificacionesPorcentuales.h"

BonificacionesPorcentuales::BonificacionesPorcentuales(double _porcientoBonificacion, double _salario){
    salario = _salario;
    porcientoBonificacion = _porcientoBonificacion;
}

double BonificacionesPorcentuales::calcularPorcentajeBonificacion() const{
    return (salario * porcientoBonificacion) / 100;
}

double BonificacionesPorcentuales::calcularSalario() const{
    return salario + calcularPorcentajeBonificacion();
}
