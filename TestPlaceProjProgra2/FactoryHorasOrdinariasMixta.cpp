#include "FactoryHorasOrdinariasMixta.h"

HorasOrdinariasMixta* FactoryHorasOrdinariasMixta::crear(double _horasTrabajadas, double _salario)
{
    return new HorasOrdinariasMixta(_horasTrabajadas, _salario);
}
