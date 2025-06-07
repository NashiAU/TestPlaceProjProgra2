#pragma once
#include "FactoryBonificacionesMontoFijo.h"
#include "FactoryBonificacionesPorcentuales.h"
#include "FactoryHorasOrdinariasDiurno.h"
#include "FactoryHorasOrdinariasNocturno.h"
#include "FactoryHorasOrdinariasMixta.h"
/*#include "BonificacionesMontoFijo.h"
#include "BonificacionesPorcentuales.h"
#include "HorasOrdinariasDiurno.h"
#include "HorasOrdinariasNocturno.h"
#include "HorasOrdinariasMixta.h"
#include "FactoryDeduccionesPermanentes.h"
#include "FactoryDeduccionPorcentual.h"
#include "DeduccionFija.h"
#include "IIngresos.h"
#include "IDeducciones.h"
#include "Calculos.h"

class BuilderCalculos {
private:
	IDeducciones* deducciones;
	IIngresos* ingresos;
	double salarioBase;
	double salarioNeto;
	double salarioBruto;
public:
	BuilderCalculos(double = 0, double = 0, double = 399203.69);
	BuilderCalculos* conHorasDiurno();
	BuilderCalculos* conHorasNocturno();
	BuilderCalculos* conHorasMixtas();
	BuilderCalculos* conBonificacionFija(double montoFijo);
	BuilderCalculos* conBonificacionPorcentual(double porcentaje);
	BuilderCalculos* conDeduccionFija(double montoFijo);
	BuilderCalculos* conDeduccionPorcentual(double porcentaje);
	Calculos* construir() const;

};
*/