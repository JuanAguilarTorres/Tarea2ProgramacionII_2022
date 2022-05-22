#include "planilla.h"
#include <iostream>
#include <sstream>
#include <string>

planilla::planilla() {

}

planilla::~planilla() {
    delete this->empleadoRaiz;
}

void planilla::agregarEmpleado(empleado *nuevoEmpleado) {
    int idSupervisor = nuevoEmpleado->ObtenerIdSupervisor();
    int idEmpleado = nuevoEmpleado->ObtenerIdEmpleado();

    if ( (idSupervisor == 1) && (idEmpleado == 1) ) 
    {
        this->empleadoRaiz = nuevoEmpleado;
        this->indiceEmpleados.insert(std::pair<int, empleado* >(idEmpleado, nuevoEmpleado));

        return;
    }

    empleado *supervisor = this->indiceEmpleados.at(idSupervisor);
    supervisor->insertarSub(nuevoEmpleado);
    this->indiceEmpleados.insert(std::pair<int, empleado* >(idEmpleado, nuevoEmpleado));
    return;
}

empleado* planilla::obtenerEmpleado(int idBuscado){
    empleado *empleadoEncontrado = this->indiceEmpleados.at(idBuscado);
    return empleadoEncontrado;
}

ostream& operator << (ostream &o, planilla *planilla)
{
    int cantidad = planilla->indiceEmpleados.size(); 

    for (int i = 1; i < cantidad; i++){

        empleado *empleadoActual = planilla->obtenerEmpleado(i);

        o << empleadoActual << endl;
    }

    return o;
}

istream& operator >> (istream &i, planilla *planilla)
{
    
    string linea;

    while (std::getline(i, linea)) {
        
        std::istringstream streamLinea(linea);

        empleado *nuevoEmpleado = new empleado();
        streamLinea >> nuevoEmpleado;

        planilla->agregarEmpleado(nuevoEmpleado);
    }

    return i;
}