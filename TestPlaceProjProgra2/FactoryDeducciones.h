#pragma once
#include "IDeducciones.h"
#include "ObjectAdaptador.h"

class FactoryDeducciones : public ObjectAdaptador{
public:
	virtual IDeducciones* crear(double) = 0;
};

