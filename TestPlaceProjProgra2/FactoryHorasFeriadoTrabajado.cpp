#include "FactoryHorasFeriadoTrabajado.h"

HorasFeriadoLaborado* FactoryHorasFeriadoTrabajado::crear(double _horasTrabajadas, double _salario)
{
    return new HorasFeriadoLaborado(_horasTrabajadas, _salario);
}
