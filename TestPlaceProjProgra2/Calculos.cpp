#include "Calculos.h"

Calculos::Calculos(IDeducciones* _deducciones, IIngresos* _ingresos) : deducciones(_deducciones), ingresos(_ingresos) {}
double Calculos::calcularDeducciones() const {
	return deducciones->calcularDeducciones();
}
double Calculos::calcularIngresos() const {
	return ingresos->calcularSalario();
}
double Calculos::calcularTotal() const {
	return calcularIngresos() - calcularDeducciones();
}
Calculos::~Calculos() {
	delete deducciones;
	delete ingresos;
}