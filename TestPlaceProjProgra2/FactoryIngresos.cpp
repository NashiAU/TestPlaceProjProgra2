#include "FactoryIngresos.h"
#include "HorasOrdinariasDiurno.h"
#include "HorasOrdinariasNocturno.h"
#include "HorasOrdinariasMixta.h"
#include "BonificacionesPorcentuales.h"
#include "BonificacionesMontoFijo.h"
#include "HorasFeriadoLaborado.h"



FactoryIngresos::FactoryIngresos(double _salario)
{
	salarioBase = _salario;
}

HorasOrdinariasDiurno* FactoryIngresos::crearIngresosHDiurno(){
	return new HorasOrdinariasDiurno(salarioBase);
}
HorasOrdinariasNocturno* FactoryIngresos::crearIngresosHNocturno()
{
	return new HorasOrdinariasNocturno(salarioBase);
}
HorasOrdinariasMixta* FactoryIngresos::crearIngresosHMixta()
{
	return new HorasOrdinariasMixta(salarioBase);
}
BonificacionesPorcentuales* FactoryIngresos::crearBonificacionesPorcentuales(double porcentaje)
{
	return new BonificacionesPorcentuales(porcentaje, salarioBase);
}
BonificacionesMontoFijo* FactoryIngresos::crearBonificacionesMontoFijo(double cantidad)
{
	return new BonificacionesMontoFijo(cantidad, salarioBase);
}
HorasFeriadoLaborado* FactoryIngresos::crearIngresosFeriadoLaborado(double horasTrabajadas)
{
	return new HorasFeriadoLaborado(horasTrabajadas, salarioBase);
}