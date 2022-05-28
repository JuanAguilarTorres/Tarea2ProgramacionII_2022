#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class empleado {

    protected:
    int idEmpleado;
    string nombre;
    string apellido;
    string email;
    int idSupervisor;
    vector<empleado *> subEmpleados;
    float pagoNeto;

    public:

    virtual ~empleado();
    virtual float calculoPago() = 0;
    virtual int obtenerIdEmpleado();
    virtual int obtenerIdSupervisor();
    virtual string obtenerNombreCompleto();
    virtual void insertarSub(empleado *subEmpleado);
    virtual string obtenerInformacion();

};

#endif
