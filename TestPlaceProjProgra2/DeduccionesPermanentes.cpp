#include "DeduccionesPermanentes.h"

DeduccionesPermanentes::DeduccionesPermanentes(double _salario){
	salario = _salario;
}

double DeduccionesPermanentes::calcularCCSS() const
{
    return salario * (14.5/100);
}

double DeduccionesPermanentes::calcularRenta() const
{
    if (salario > 4745000) {
        return salario * (25/100);
   }
    else if (salario > 2373001) {
        return salario * (20/100);
    }
    else if (salario > 1352001) {
        return salario * (15/100);
    }
    else if (salario > 922001) {
        return salario * (10/100);
    }
    return 0;
}

double DeduccionesPermanentes::calcularDeducciones() const
{
    return salario - calcularCCSS() - calcularRenta();
}
