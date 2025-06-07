#pragma once
#include "IDeducciones.h"
#include "DeduccionesPermanentes.h"
#include "DeduccionPorcentual.h"
#include "DeduccionFija.h"
#include "ObjectAdaptador.h"

class FactoryDeducciones : public ObjectAdaptador{
private:
	double salarioBase;
public:
	FactoryDeducciones(double = 399203.69);
	IDeducciones* crearDeduccionesPermanentes();
	IDeducciones* crearDeduccionPorcentual(double);
	IDeducciones* crearDeduccionFija(double);
};

