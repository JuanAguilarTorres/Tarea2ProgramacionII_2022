#include "planilla.h"
#include <iostream>
#include <sstream>
#include <string>

planilla::planilla() {

}

planilla::~planilla() {
    for (empleado *empleado : this->empleados)
    {
        delete empleado;
    }
}

void planilla::agregarEmpleado(empleado *nuevoEmpleado) {
    this->empleados.push_back(nuevoEmpleado);
}

ostream& operator << (ostream &o, const planilla *planilla)
{
    for (empleado *empleado : planilla->empleados)
    {
        o << empleado << endl;
    }

    return o;
}

istream& operator >> (istream &i, planilla *planilla)
{
    
    string linea;

    while (std::getline(i, linea)) {
        // Mientras el getline obtenga alguna línea,
        // procesar línea

        std::istringstream streamLinea(linea);

        empleado *nuevoEmpleado = new empleado();
        streamLinea >> nuevoEmpleado;

        planilla->agregarEmpleado(nuevoEmpleado);
    }

    return i;
}