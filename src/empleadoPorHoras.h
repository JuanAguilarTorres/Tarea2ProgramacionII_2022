#ifndef EMPLEADOPORHORAS_H
#define EMPLEADOPORHORAS_H

#include "empleado.h"

using namespace std;

class empleadoPorHoras : public empleado {

    int costoPorHoras;
    int horasMes;

    public:
    empleadoPorHoras(int nuevoIdEmpleado, string nuevoNombre, string nuevoApellido, int nuevoIdSupervisor, int nuevoCostoPorHoras, int nuevaHorasMes);

    virtual int calculoPago();
    virtual int obtenerIdEmpleado();
    virtual int obtenerIdSupervisor();
    virtual string obtenerNombreCompleto();
    virtual void insertarSub(empleado *subEmpleado);

};

#endif
