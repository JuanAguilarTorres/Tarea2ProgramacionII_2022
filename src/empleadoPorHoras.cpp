#include "empleadoPorHoras.h"

using namespace std;

empleadoPorHoras::empleadoPorHoras(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, int nuevoPagoBruto){
    this->idEmpleado = nuevoIdEmpleado;
    this->nombre = nuevoNombre;
    this->apellido = nuevoApellido;
    this->idSupervisor = nuevoIdSupervisor;
    this->pagoBruto = nuevoPagoBruto;
}

int empleadoPorHoras::calculoPago()
{
    return this->pagoBruto;
}
