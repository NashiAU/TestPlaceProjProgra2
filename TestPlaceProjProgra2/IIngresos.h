#pragma once
#include "ObjectAdaptador.h"
class IIngresos: public ObjectAdaptador {
protected:
	double salario;
public:
	virtual double calcularSalario() const = 0;
};

