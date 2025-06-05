#pragma once
#include "IDeducciones.h"
#include "IIngresos.h"
class Calculos{
private:
	IDeducciones* deducciones;
	IIngresos* ingresos;
public:
	Calculos(IDeducciones* _deducciones, IIngresos* _ingresos);
	double calcularDeducciones() const;
	double calcularIngresos() const;
	double calcularTotal() const;
	~Calculos();
};

