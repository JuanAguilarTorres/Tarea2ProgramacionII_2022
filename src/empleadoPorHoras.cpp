#include "empleadoPorHoras.h"

using namespace std;

empleadoPorHoras::empleadoPorHoras(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, int nuevoPagoNeto){
    this->idEmpleado = nuevoIdEmpleado;
    this->nombre = nuevoNombre;
    this->apellido = nuevoApellido;
    this->idSupervisor = nuevoIdSupervisor;
    this->pagoNeto = nuevoPagoNeto;
}

float empleadoPorHoras::calculoPagoNeto()
{
    return this->pagoNeto;
}

float empleadoPorHoras::calculoPagoBruto()
{
    return this->pagoNeto;
}

float empleadoPorHoras::calculoImpuestos()
{
    return 0;
}
