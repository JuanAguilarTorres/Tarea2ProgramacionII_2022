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

    public:

    virtual ~empleado();
    virtual float CalculoPago() = 0;
    virtual int ObtenerIdEmpleado();
    virtual int ObtenerIdSupervisor();
    virtual string ObtenerNombreCompleto();
    virtual void insertarSub(empleado *subEmpleado);
    
};

#endif
