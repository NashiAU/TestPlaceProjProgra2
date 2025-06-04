#pragma once
#include "ObjectAdaptador.h"
class IDeducciones : public ObjectAdaptador {
protected:
	double salario;
public:
	virtual double calcularDeducciones() const = 0;
};
