#include "BuilderCalculos.h"

BuilderCalculos::BuilderCalculos(double salarioNeto, double salarioBruto, double _salarioBase)
{
	deducciones = nullptr;
	ingresos = nullptr;
	salarioNeto = 0.0;
	salarioBruto = 0.0;
	salarioBase = _salarioBase;
}

BuilderCalculos* BuilderCalculos::conHorasDiurno()
{
	FactoryHorasOrdinariasDiurno horas;
	ingresos = horas.crear(salarioBase);
	salarioBruto = ingresos->calcularSalario();
	salarioNeto = ingresos->calcularSalario();
	return new BuilderCalculos(salarioNeto, salarioBruto, salarioBase);
}

BuilderCalculos* BuilderCalculos::conHorasNocturno()
{
	FactoryHorasOrdinariasNocturno horas;
	ingresos = horas.crear(salarioBase);
	salarioBruto = ingresos->calcularSalario();
	salarioNeto = ingresos->calcularSalario();
	return new BuilderCalculos(salarioNeto, salarioBruto, salarioBase);
}

BuilderCalculos* BuilderCalculos::conHorasMixtas()
{
	FactoryHorasOrdinariasMixta horas;
	ingresos = horas.crear(salarioBase);
	salarioBruto = ingresos->calcularSalario();
	salarioNeto = ingresos->calcularSalario();
	return new BuilderCalculos(salarioNeto, salarioBruto, salarioBase);
}

BuilderCalculos* BuilderCalculos::conBonificacionFija(double montoFijo)
{
	FactoryBonificacionesMontoFijo bonificacion;
	ingresos = bonificacion.crear(montoFijo);
	salarioBruto += ingresos->calcularSalario();
	salarioNeto += ingresos->calcularSalario();
	return new BuilderCalculos(salarioNeto, salarioBruto, salarioBase);
}

BuilderCalculos* BuilderCalculos::conBonificacionPorcentual(double porcentaje)
{
	FactoryBonificacionesPorcentuales bonificacion;
	ingresos = bonificacion.crear(porcentaje);
	salarioBruto += ingresos->calcularSalario();
	salarioNeto += ingresos->calcularSalario();
	return new BuilderCalculos(salarioNeto, salarioBruto, salarioBase);
}

BuilderCalculos* BuilderCalculos::conDeduccionFija(double montoFijo)
{
	FactoryDeduccionesPermanentes deduccion;
	deducciones = deduccion.crear(montoFijo);
	salarioNeto -= deducciones->calcularDeducciones();
	return new BuilderCalculos(salarioNeto, salarioBruto, salarioBase);
}

BuilderCalculos* BuilderCalculos::conDeduccionPorcentual(double porcentaje)
{
	FactoryDeduccionPorcentual deduccion;
	deducciones = deduccion.crear(porcentaje);
	salarioNeto -= deducciones->calcularDeducciones();
	return new BuilderCalculos(salarioNeto, salarioBruto, salarioBase);
}
