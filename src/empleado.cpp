#include "empleado.h"

empleado::empleado() {

}

empleado::~empleado() {
    for (empleado *subEmpleado : this->subEmpleados)
    {
        delete subEmpleado;
    }
}

int empleado::ObtenerIdSupervisor()
{
    return this->idSupervisor;
}

int empleado::ObtenerIdEmpleado()
{
    return this->idEmpleado;
}

void empleado::insertarSub(empleado *subEmpleado)
{
    this->subEmpleados.push_back(subEmpleado);
}


ostream& operator << (ostream &o, const empleado *empleado)
{
    o << empleado->idEmpleado << "," << empleado->nombre << "," << empleado->apellido << "," << empleado->email << "," << empleado->tipoEmpleado << "," << empleado->idSupervisor;

    return o;
}

istream& operator >> (istream &i, empleado *empleado)
{
    i >> empleado->idEmpleado >> empleado->nombre >> empleado->apellido >> empleado->email >> empleado->tipoEmpleado >> empleado->idSupervisor;
    return i;
}