#include <iostream>
#include "FactoryIngresos.h"
#include "IIngresos.h"
#include "BonificacionesMontoFijo.h"
#include "BonificacionesPorcentuales.h"
#include "HorasOrdinariasDiurno.h"
#include "HorasOrdinariasNocturno.h"
#include "HorasOrdinariasMixta.h"
#include <exception>
using namespace std;

int main(const int, char* []) {
	try {
		FactoryIngresos* factory = new FactoryIngresos(1000);
		IIngresos* salario3 = NULL;
		salario3 = factory->crearIngresosHDiurno();
		cout << "Salario con bonificaciones de monto fijo: " << salario3->calcularSalario() << endl;
		delete salario3;
		salario3 = factory->crearBonificacionesPorcentuales(10);
		cout << "Salario con bonificaciones porcentuales: " << salario3->calcularSalario() << endl;
		delete salario3;
		salario3 = factory->crearIngresosHDiurno();
		cout << "Salario con horas ordinarias diurno: " << salario3->calcularSalario() << endl;
		delete salario3;
		salario3 = factory->crearIngresosHNocturno();
		cout << "Salario con horas ordinarias nocturno: " << salario3->calcularSalario() << endl;
		delete salario3;
		salario3 = factory->crearIngresosHMixta();
		cout << "Salario con horas ordinarias mixto: " << salario3->calcularSalario() << endl;
		delete salario3;
		salario3 = factory->crearBonificacionesMontoFijo(5000);
		cout << "Salario con bonificaciones de monto fijo: " << salario3->calcularSalario() << endl;
		delete salario3;
		salario3 = factory->crearBonificacionesPorcentuales(15);
		cout << "Salario con bonificaciones porcentuales: " << salario3->calcularSalario() << endl;
		delete salario3;
		salario3 = factory->crearIngresosFeriadoLaborado(7);
		cout << "Salario con feriado laborado: " << salario3->calcularSalario() << endl;
		delete salario3;
		delete factory;
		return 0;
	}
	catch (exception error)
	{
		cout << "Error: " << error.what() << endl;
		return 1;
	}
	catch (...)
	{
		cout << "Error desconocido" << endl;
		return 1;
	}
};