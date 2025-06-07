#pragma once
#include "FactoryDeducciones.h"
#include "FactoryIngresos.h"
#include "IDeducciones.h"
#include "IIngresos.h"
class Calculos{
private:
	double salarioBase;
	double salarioNeto;
	double salarioBruto;
public:
	Calculos(double, double, double); // Yo usaria este como el delegate, el builder ya hace los calculos de ingresos y deducciones sigma
};

