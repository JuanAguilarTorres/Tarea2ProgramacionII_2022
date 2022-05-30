#ifndef EMPLEADOPORHORAS_H
#define EMPLEADOPORHORAS_H

#include "empleado.h"

using namespace std;

class empleadoPorHoras : public empleado {


    public:
    empleadoPorHoras(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, float nuevoPagoNeto);

    virtual float calculoPagoNeto();
    virtual float calculoPagoBruto();
    virtual float calculoImpuestos();

};

#endif
