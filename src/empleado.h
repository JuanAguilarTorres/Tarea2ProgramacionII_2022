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
    virtual float calculoPagoNeto() = 0;
    virtual float calculoPagoBruto() = 0;
    virtual float calculoImpuestos() = 0;
    virtual int obtenerIdEmpleado();
    virtual int obtenerIdSupervisor();
    virtual string obtenerNombreCompleto();
    virtual void insertarSub(empleado *subEmpleado);
    virtual string obtenerInformacion();
    virtual vector<empleado *> obtenerSubEmpleados();

};

#endif
