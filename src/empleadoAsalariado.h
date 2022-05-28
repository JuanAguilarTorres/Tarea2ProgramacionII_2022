#ifndef EMPLEADOASALARIADO_H
#define EMPLEADOASALARIADO_H

#include "empleado.h"

using namespace std;

class empleadoAsalariado : public empleado {

    public:
    empleadoAsalariado(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, int pagoBruto);

    virtual int calculoPago();
    virtual int calculoNeto();
    virtual int obtenerIdEmpleado();
    virtual int obtenerIdSupervisor();
    virtual string obtenerNombreCompleto();
    virtual void insertarSub(empleado *subEmpleado);

};

#endif
