#pragma once
#include "HorasFeriadoLaborado.h"
#include "FactoryIngresos.h"
class FactoryHorasFeriadoTrabajado : public FactoryIngresos{
public:
	HorasFeriadoLaborado* crear(double, double = 399203.69) override;
};

