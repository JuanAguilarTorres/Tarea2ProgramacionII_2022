#ifndef PLANILLA_H
#define PLANILLA_H

#include "empleado.h"
#include <vector>

using namespace std;

class planilla {

    vector<empleado *> empleados;

    public:
    planilla();
    ~planilla();

    void agregarEmpleado(empleado *nuevoEmpleado);

    friend istream& operator >> (istream &o, planilla *planilla);
    friend ostream& operator << (ostream &o, const planilla *planilla);
};

#endif
