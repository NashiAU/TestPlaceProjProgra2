#pragma once
#include "FactoryIngresos.h"
#include "BonificacionesPorcentuales.h"
class FactoryBonificacionesPorcentuales : public FactoryIngresos{
public:
	BonificacionesPorcentuales* crear(double, double = 399203.69) override;
};

