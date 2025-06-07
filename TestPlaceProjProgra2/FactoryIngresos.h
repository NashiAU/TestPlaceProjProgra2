#pragma once
#include "IIngresos.h"
#include "HorasOrdinariasDiurno.h"
#include "HorasOrdinariasNocturno.h"
#include "HorasOrdinariasMixta.h"
#include "BonificacionesPorcentuales.h"
#include "BonificacionesMontoFijo.h"
#include "HorasFeriadoLaborado.h"

class FactoryIngresos {
private:
	double salarioBase;
public:
	FactoryIngresos(double);
	IIngresos* crearIngresosHDiurno();
	IIngresos* crearIngresosHNocturno();
	IIngresos* crearIngresosHMixto();
	IIngresos* crearBonificacionesPorcentuales(double);
	IIngresos* crearBonificacionesMontoFijo(double);
	IIngresos* crearIngresosFeriadoTrabajado(double);
};

