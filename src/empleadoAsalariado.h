#ifndef EMPLEADOASALARIADO_H
#define EMPLEADOASALARIADO_H

#include "empleado.h"

using namespace std;

class empleadoAsalariado : public empleado {

    int pagoMensual;

    public:
    empleadoAsalariado(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, int pagoMensual);

    virtual int calculoPago();
    virtual int calculoBruto();
    virtual int obtenerIdEmpleado();
    virtual int obtenerIdSupervisor();
    virtual string obtenerNombreCompleto();
    virtual void insertarSub(empleado *subEmpleado);

};

#endif
