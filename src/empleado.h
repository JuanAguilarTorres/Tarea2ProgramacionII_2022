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
    int pagoBruto;

    public:

    virtual ~empleado();
    virtual int calculoPago() = 0;
    virtual int obtenerIdEmpleado();
    virtual int obtenerIdSupervisor();
    virtual string obtenerNombreCompleto();
    virtual void insertarSub(empleado *subEmpleado);

};

#endif
