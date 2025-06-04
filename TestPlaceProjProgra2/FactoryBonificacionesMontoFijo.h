#pragma once
#include "FactoryIngresos.h"
#include "BonificacionesMontoFijo.h"
class FactoryBonificacionesMontoFijo :public FactoryIngresos {
public:
	BonificacionesMontoFijo* crear(double, double = 399203.69) override;
};

