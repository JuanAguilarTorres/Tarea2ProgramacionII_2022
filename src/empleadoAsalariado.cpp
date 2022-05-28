#include "empleadoAsalariado.h"

using namespace std;

empleadoAsalariado::empleadoAsalariado(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, int nuevoPagoMensual){
    this->idEmpleado = nuevoIdEmpleado;
    this->nombre = nuevoNombre;
    this->apellido = nuevoApellido;
    this->idSupervisor = nuevoIdSupervisor;
    this->pagoMensual = nuevoPagoMensual;
}

int empleadoAsalariado::calculoPago()
{
    return this->pagoMensual;
}

int empleadoAsalariado::calculoBruto()
{
    return this->pagoMensual;
}