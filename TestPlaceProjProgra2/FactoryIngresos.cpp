#include "FactoryIngresos.h"


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
HorasOrdinariasNocturno* FactoryIngresos::crearIngresosHMixto() {
	return new HorasOrdinariasNocturno(salarioBase);
}
HorasOrdinariasMixta* FactoryIngresos::crearIngresosHMixta(double salarioBase)
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
HorasFeriadoLaborado* FactoryIngresos::crearIngresosFeriadoTrabajado(double horasTrabajadas)
{
	return new HorasFeriadoLaborado(horasTrabajadas, salarioBase);
}