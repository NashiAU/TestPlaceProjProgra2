#pragma once
#include "ObjectAdaptador.h"
class IIngresos: public ObjectAdaptador {
public:
	virtual double calcularSalario() const = 0;
};

