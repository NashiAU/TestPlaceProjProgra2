#include "FactoryDeducciones.h"

FactoryDeducciones::FactoryDeducciones(double _salario)
{
	salarioBase = _salario;
}

IDeducciones* FactoryDeducciones::crearDeduccionesPermanentes()
{
	return new DeduccionesPermanentes(salarioBase);
}

IDeducciones* FactoryDeducciones::crearDeduccionPorcentual(double porciento)
{
	return new DeduccionPorcentual(salarioBase, porciento);
}

IDeducciones* FactoryDeducciones::crearDeduccionFija(double cantidad)
{
	return new DeduccionFija(salarioBase, cantidad);
}
 