#pragma once
#include "IIngresos.h"

class FactoryIngresos {
public:
	virtual IIngresos* crear(double, double) = 0;
};

