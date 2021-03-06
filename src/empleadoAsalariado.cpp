#include "empleadoAsalariado.h"

using namespace std;

empleadoAsalariado::empleadoAsalariado(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, float nuevoPagoBruto){
    this->idEmpleado = nuevoIdEmpleado;
    this->nombre = nuevoNombre;
    this->apellido = nuevoApellido;
    this->idSupervisor = nuevoIdSupervisor;
    this->pagoBruto = nuevoPagoBruto;
    this->pagoNeto = nuevoPagoBruto*(0.93);
}

float empleadoAsalariado::calculoPagoBruto()
{
    return this->pagoBruto;
}

float empleadoAsalariado::calculoPagoNeto()
{
    return this->pagoNeto;
}

float empleadoAsalariado::calculoImpuestos()
{
    return (this->pagoBruto) - (this->pagoNeto);
}
