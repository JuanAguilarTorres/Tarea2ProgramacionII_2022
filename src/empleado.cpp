#include "empleado.h"

empleado::empleado() {

}

empleado::empleado(int idEmpleadoNuevo, string nombreNuevo, string apellidoNuevo, string emailNuevo, int tipoEmpleadoNuevo, int idSupervisorNuevo) {
    this->idEmpleado = idEmpleadoNuevo;
    this->nombre = nombreNuevo;
    this->apellido = apellidoNuevo;
    this->email = emailNuevo;
    this->tipoEmpleado = tipoEmpleadoNuevo;
    this->idSupervisor = idSupervisorNuevo;
}

empleado::~empleado() {
    
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