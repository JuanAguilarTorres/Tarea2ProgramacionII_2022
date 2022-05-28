#ifndef EMPLEADOPORHORAS_H
#define EMPLEADOPORHORAS_H

#include "empleado.h"

using namespace std;

class empleadoPorHoras : public empleado {


    public:
    empleadoPorHoras(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, int nuevoPagoBruto);

    virtual int calculoPago();

};

#endif
