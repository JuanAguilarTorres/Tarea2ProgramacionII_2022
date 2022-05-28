#include "empleadoAsalariado.h"

using namespace std;

empleadoAsalariado::empleadoAsalariado(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, int nuevoPagoBruto){
    this->idEmpleado = nuevoIdEmpleado;
    this->nombre = nuevoNombre;
    this->apellido = nuevoApellido;
    this->idSupervisor = nuevoIdSupervisor;
    this->pagoBruto = nuevoPagoBruto;
}

int empleadoAsalariado::calculoPago()
{
    return this->pagoBruto;
}

int empleadoAsalariado::calculoNeto()
{
    return 0;
}