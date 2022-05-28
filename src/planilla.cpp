#include "planilla.h"
#include <iostream>
#include <sstream>
#include <string>

planilla::planilla(istream *streamPersonasNuevo, istream *streamNominaNuevo, istream *streamHorasNuevo) {

    this->streamPersonas = streamPersonasNuevo;
    this->streamNomina = streamNominaNuevo;
    this->streamHoras = streamHorasNuevo;
    
    string linea;

    int idEmpleado;
    string nombre;
    string apellido;
    string email;
    int tipoEmpleado;
    int idSupervisor;

    int monto;
    int horas;

    int montoHoras;

    while (std::getline(*(this->streamNomina), linea)) {
            
        std::istringstream streamLinea(linea);

        while (streamLinea >> idEmpleado >> monto){
            this->indiceNomina.insert(std::pair<int,int>(idEmpleado, monto));
        }
    }

    while (std::getline(*(this->streamHoras), linea)) {
            
        std::istringstream streamLinea(linea);

        while (streamLinea >> idEmpleado >> monto >> horas){
            montoHoras = monto * horas;
            this->indiceHoras.insert(std::pair<int,int>(idEmpleado, montoHoras));
        }
    }

    
    while (std::getline(*(this->streamPersonas), linea)) {
            
        std::istringstream streamLinea(linea);

        while (streamLinea >> idEmpleado >> nombre >> apellido >> email >> tipoEmpleado >> idSupervisor){
            if (tipoEmpleado == 1)
            {
                monto = this->indiceNomina.at(idEmpleado);
                empleadoAsalariado *nuevoEmpleado = new empleadoAsalariado(idEmpleado, nombre, apellido, idSupervisor, monto);
                this->agregarEmpleado(nuevoEmpleado);
            }else if (tipoEmpleado == 2)
            {
                monto = this->indiceHoras.at(idEmpleado);
                empleadoPorHoras *nuevoEmpleado = new empleadoPorHoras(idEmpleado, nombre, apellido, idSupervisor, monto);
                this->agregarEmpleado(nuevoEmpleado);
            }
            
            
        }

    }

}

planilla::~planilla() {
    delete this->empleadoRaiz;
}

void planilla::agregarEmpleado(empleado *nuevoEmpleado) {
    int idSupervisor = nuevoEmpleado->obtenerIdSupervisor();
    int idEmpleado = nuevoEmpleado->obtenerIdEmpleado();

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
        empleado *supervisorActual = planilla->obtenerEmpleado(empleadoActual->obtenerIdSupervisor());

        o << empleadoActual << "," << supervisorActual->obtenerNombreCompleto() << endl;
    }

    return o;
}
