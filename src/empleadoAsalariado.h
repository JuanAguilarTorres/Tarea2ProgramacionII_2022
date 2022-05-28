#ifndef EMPLEADOASALARIADO_H
#define EMPLEADOASALARIADO_H

#include "empleado.h"

using namespace std;

class empleadoAsalariado : public empleado {

    int pagoBruto;

    public:
    empleadoAsalariado(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, int pagoBruto);

    virtual float calculoPagoBruto();
    virtual float calculoPagoNeto();
    virtual float calculoImpuestos();
};

#endif
