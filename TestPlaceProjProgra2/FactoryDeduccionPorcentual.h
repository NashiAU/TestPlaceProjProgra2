#pragma once
#include "DeduccionPorcentual.h"
#include "FactoryDeducciones.h"
class FactoryDeduccionPorcentual : public FactoryDeducciones {
	DeduccionPorcentual* crear(double = 399203.69, double = 0) override;
};

