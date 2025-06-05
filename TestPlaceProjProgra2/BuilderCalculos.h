#pragma once
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
#include "FactoryDeduccionesPermanentes.h"
#include "FactoryDeduccionesPorcentuales.h"
#include "DeduccionFija.h"
#include "IIngresos.h"
#include "IDeducciones.h"

class BuilderCalculos{
	private:
	IDeducciones* deducciones;
	IIngresos* ingresos;
public:
	BuilderCalculos() : deducciones(nullptr), ingresos(nullptr) {}
	BuilderCalculos& withDeducciones(IDeducciones* _deducciones) {
		deducciones = _deducciones;
		return *this;
	}
	BuilderCalculos& withIngresos(IIngresos* _ingresos) {
		ingresos = _ingresos;
		return *this;
	}
	Calculos build() const {
		if (!deducciones || !ingresos) {
			throw std::runtime_error("Deducciones and Ingresos must be set before building Calculos.");
		}
		return Calculos(deducciones, ingresos);
	}
};

