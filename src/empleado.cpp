#include "empleado.h"

empleado::~empleado() {
    for (empleado *subEmpleado : this->subEmpleados){
        delete subEmpleado;
    }
}

int empleado::obtenerIdEmpleado(){
    return this->idEmpleado;
}


int empleado::obtenerIdSupervisor(){
    return this->idSupervisor;
}

string empleado::obtenerNombreCompleto(){
    return this->nombre + " " + this->apellido;
}


void empleado::insertarSub(empleado *subEmpleado){
    this->subEmpleados.push_back(subEmpleado);
}

string empleado::obtenerInformacion(){
    return to_string(this->idEmpleado) + "," + this->nombre +  " " + this->apellido;
}

vector<empleado *> empleado::obtenerSubEmpleados(){
    return this->subEmpleados;
}