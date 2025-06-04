#include <iostream>
#include "FactoryBonificacionesMontoFijo.h"
#include "FactoryBonificacionesPorcentuales.h"
#include "FactoryHorasOrdinariasDiurno.h"
#include "FactoryHorasOrdinariasNocturno.h"
#include "FactoryHorasOrdinariasMixta.h"
#include "BonificacionesMontoFijo.h"
#include "BonificacionesPorcentuales.h"
#include "HorasOrdinariasDiurno.h"
#include "HorasOrdinariasNocturno.h"
#include "HorasOrdinariasMixta.h"
#include "IIngresos.h"
#include <exception>
using namespace std;

int main(const int, char* []) {
	try {
		IIngresos* salario3 = NULL;
		FactoryBonificacionesMontoFijo* fijo1 = new FactoryBonificacionesMontoFijo;
		FactoryBonificacionesPorcentuales* porcentual1 = new FactoryBonificacionesPorcentuales;
		FactoryHorasOrdinariasDiurno* horas1 = new FactoryHorasOrdinariasDiurno;
		FactoryHorasOrdinariasNocturno* horas2 = new FactoryHorasOrdinariasNocturno;
		FactoryHorasOrdinariasMixta* horas3 = new FactoryHorasOrdinariasMixta;
		horas1->crear(8);
		salario3 = fijo1->crear(1000);
		cout << salario3->calcularSalario() << endl;
		delete salario3;
		salario3 = porcentual1->crear(20);
		cout << salario3->calcularSalario() << endl;
		delete salario3;
		salario3 = horas1->crear(100);
		cout << salario3->calcularSalario() << endl;
		delete salario3;
		salario3 = horas2->crear(100);
		cout << salario3->calcularSalario() << endl;
		delete salario3;
		salario3 = horas3->crear(100);
		cout << salario3->calcularSalario() << endl;
		delete salario3;
		delete fijo1;
		delete porcentual1;
		delete horas1;
		delete horas2;
		delete horas3;
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