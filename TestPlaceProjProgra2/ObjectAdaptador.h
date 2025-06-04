#pragma once
#include "IObjecto.h"

/*
	El patr�n adaptador
	consiste en implementar 
	una interface, a sus comportamientos
	gen�ricos.
*/
class ObjectAdaptador : public IObjecto {
public:
	virtual string toString() const override;
	virtual bool equals(IObjecto*) override;
	virtual string getType() const override;
};

