#include "empleado.h"

empleado::~empleado() {
    for (empleado *subEmpleado : this->subEmpleados){
        delete subEmpleado;
    }
}

int empleado::obtenerIdSupervisor(){
    return this->idSupervisor;
}

int empleado::obtenerIdEmpleado(){
    return this->idEmpleado;
}

string empleado::obtenerNombreCompleto(){
    return this->nombre + " " + this->apellido;
}


void empleado::insertarSub(empleado *subEmpleado){
    this->subEmpleados.push_back(subEmpleado);
}
