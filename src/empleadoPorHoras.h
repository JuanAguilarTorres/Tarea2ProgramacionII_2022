#ifndef EMPLEADOPORHORAS_H
#define EMPLEADOPORHORAS_H

#include "empleado.h"

using namespace std;

class empleadoPorHoras : public empleado {

    int costoPorHoras;
    int horasMes;

    public:
    empleadoPorHoras(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, int nuevoCostoPorHoras, int nuevaHorasMes);

    virtual float CalculoPago();
    virtual int ObtenerIdEmpleado();
    virtual int ObtenerIdSupervisor();
    virtual string ObtenerNombreCompleto();
    virtual void insertarSub(empleado *subEmpleado);

};

#endif
