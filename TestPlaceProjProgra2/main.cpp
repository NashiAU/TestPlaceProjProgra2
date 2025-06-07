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
		FactoryIngresos* factory = new FactoryIngresos();
		IIngresos* salario3 = NULL;
		//salario3 = factory->crearIngresosHDiurno();
		delete salario3;
		/*cout << "Salario con bonificaciones de monto fijo: " << salario3->calcularSalario() << endl;
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
		salario3 = factory->crearIngresosHMixto();
		cout << "Salario con horas ordinarias mixto: " << salario3->calcularSalario() << endl;
		delete salario3;*/
		//delete factory;
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