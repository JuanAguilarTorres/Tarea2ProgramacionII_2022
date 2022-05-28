#include "empleadoPorHoras.h"

using namespace std;

empleadoPorHoras::empleadoPorHoras(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, int nuevoCostoPorHoras, int nuevaHorasMes){
    this->idEmpleado = nuevoIdEmpleado;
    this->nombre = nuevoNombre;
    this->apellido = nuevoApellido;
    this->idSupervisor = nuevoIdSupervisor;
    this->costoPorHoras = nuevoCostoPorHoras;
    this->horasMes = nuevaHorasMes;
}

int empleadoPorHoras::calculoPago()
{
    return this->costoPorHoras * this->horasMes;
}