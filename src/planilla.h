#ifndef PLANILLA_H
#define PLANILLA_H

#include "empleado.h"
#include <map>

using namespace std;

class planilla {

    empleado *empleadoRaiz;
    map<int, empleado*> indiceEmpleados;

    public:
    planilla();
    ~planilla();

    void agregarEmpleado(empleado *nuevoEmpleado);
    empleado* obtenerEmpleado(int idBuscado); 

    friend istream& operator >> (istream &o, planilla *planilla);
    friend ostream& operator << (ostream &o, const planilla *planilla);
};

#endif
