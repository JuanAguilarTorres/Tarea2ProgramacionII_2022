#include "planilla.h"
#include <iostream>
#include <sstream>
#include <string>

planilla::planilla(istream *streamPersonasNuevo, istream *streamNominaNuevo, istream *streamHorasNuevo) {
    this->streamPersonas = streamPersonasNuevo;
    this->streamNomina = streamNominaNuevo;
    this->streamHoras = streamHorasNuevo;
    
    string linea;
    string idEmpleado;
    string monto;
    string horas;
    string montoHoras;

    while (std::getline(*(this->streamPersonas), linea)) {
            
        std::istringstream streamLinea(linea);

        empleado *nuevoEmpleado = new empleado();
        streamLinea >> nuevoEmpleado;

        this->agregarEmpleado(nuevoEmpleado);
    }

    while (std::getline(*(this->streamNomina), linea)) {
            
        std::istringstream streamLinea(linea);

        while (streamLinea >> idEmpleado >> monto){
            this->indiceNomina.insert(std::pair<string,string>(idEmpleado, monto));
        }
    }

    while (std::getline(*(this->streamHoras), linea)) {
            
        std::istringstream streamLinea(linea);

        while (streamLinea >> idEmpleado >> monto >> horas){
            montoHoras = monto + " " + horas;
            this->indiceHoras.insert(std::pair<string,string>(idEmpleado, montoHoras));
        }
    }
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

ostream& operator << (ostream &o, planilla *planilla){

    int cantidad = planilla->indiceEmpleados.size(); 

    for (int i = 1; i <= cantidad; i++){

        empleado *empleadoActual = planilla->obtenerEmpleado(i);
        empleado *supervisorActual = planilla->obtenerEmpleado(empleadoActual->ObtenerIdSupervisor());

        o << empleadoActual << "," << supervisorActual->ObtenerNombreCompleto() << endl;
    }

    return o;
}
