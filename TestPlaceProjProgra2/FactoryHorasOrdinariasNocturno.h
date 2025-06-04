#pragma once
#include "FactoryIngresos.h"
#include "HorasOrdinariasNocturno.h"
class FactoryHorasOrdinariasNocturno : public FactoryIngresos{
public:
	HorasOrdinariasNocturno* crear(double, double = 399203.69) override;
};

