#ifndef PLANILLA_H
#define PLANILLA_H

#include "empleado.h"
#include <map>

using namespace std;

class planilla {

    istream *streamEntrada;
    
    empleado *empleadoRaiz;
    map<int, empleado*> indiceEmpleados;
    
    public:
    planilla(istream *streamEntradaNuevo);
    ~planilla();

    void agregarEmpleado(empleado *nuevoEmpleado);
    empleado* obtenerEmpleado(int idBuscado);
    string procesar();

    friend ostream& operator << (ostream &o, planilla *planilla);
};

#endif
