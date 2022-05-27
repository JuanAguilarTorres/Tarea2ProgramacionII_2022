#include "empleado.h"

empleado::~empleado() {
    for (empleado *subEmpleado : this->subEmpleados){
        delete subEmpleado;
    }
}

int empleado::ObtenerIdSupervisor(){
    return this->idSupervisor;
}

int empleado::ObtenerIdEmpleado(){
    return this->idEmpleado;
}

string empleado::ObtenerNombreCompleto(){
    return this->nombre + " " + this->apellido;
}


void empleado::insertarSub(empleado *subEmpleado){
    this->subEmpleados.push_back(subEmpleado);
}
