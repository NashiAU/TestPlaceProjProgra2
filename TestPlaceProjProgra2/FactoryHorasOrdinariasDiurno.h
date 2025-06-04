#pragma once
#include "FactoryIngresos.h"
#include "HorasOrdinariasDiurno.h"

class FactoryHorasOrdinariasDiurno : public FactoryIngresos{
public:
	HorasOrdinariasDiurno* crear(double, double = 399203.69) override;
};

