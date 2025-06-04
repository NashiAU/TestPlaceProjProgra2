#include "FactoryBonificacionesPorcentuales.h"

BonificacionesPorcentuales* FactoryBonificacionesPorcentuales::crear(double porcientoBonificacion, double _salario){
    return  new BonificacionesPorcentuales(porcientoBonificacion, _salario);
}
