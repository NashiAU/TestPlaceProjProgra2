#pragma once
#include "ObjectAdaptador.h"
#include "HorasOrdinariasDiurno.h"
#include "HorasOrdinariasNocturno.h"
#include "HorasOrdinariasMixta.h"
#include "BonificacionesPorcentuales.h"
#include "BonificacionesMontoFijo.h"
#include "HorasFeriadoLaborado.h"

class FactoryIngresos: public ObjectAdaptador {
private:
	double salarioBase;
public:
	FactoryIngresos(double = 399203.69);
	HorasOrdinariasDiurno* crearIngresosHDiurno();
	HorasOrdinariasMixta* crearIngresosHMixta();
	HorasOrdinariasNocturno* crearIngresosHNocturno();
	BonificacionesPorcentuales* crearBonificacionesPorcentuales(double);
	BonificacionesMontoFijo* crearBonificacionesMontoFijo(double);
	HorasFeriadoLaborado* crearIngresosFeriadoLaborado(double);
};

