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

IIngresos* FactoryIngresos::crearIngresosHDiurno(){
	return new HorasOrdinariasDiurno(salarioBase);
}
IIngresos* FactoryIngresos::crearIngresosHNocturno()
{
	return new HorasOrdinariasNocturno(salarioBase);
}
IIngresos* FactoryIngresos::crearIngresosHMixta()
{
	return new HorasOrdinariasMixta(salarioBase);
}
IIngresos* FactoryIngresos::crearBonificacionesPorcentuales(double porcentaje)
{
	return new BonificacionesPorcentuales(porcentaje, salarioBase);
}
IIngresos* FactoryIngresos::crearBonificacionesMontoFijo(double cantidad)
{
	return new BonificacionesMontoFijo(cantidad, salarioBase);
}
IIngresos* FactoryIngresos::crearIngresosFeriadoLaborado(double horasTrabajadas)
{
	return new HorasFeriadoLaborado(horasTrabajadas, salarioBase);
}