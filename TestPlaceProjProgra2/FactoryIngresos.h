#pragma once
#include "ObjectAdaptador.h"
class IIngresos;

class FactoryIngresos: public ObjectAdaptador {
private:
	double salarioBase;
public:
	FactoryIngresos(double = 399203.69);
	IIngresos* crearIngresosHDiurno();
	IIngresos* crearIngresosHMixta();
	IIngresos* crearIngresosHNocturno();
	IIngresos* crearBonificacionesPorcentuales(double);
	IIngresos* crearBonificacionesMontoFijo(double);
	IIngresos* crearIngresosFeriadoLaborado(double);
};

