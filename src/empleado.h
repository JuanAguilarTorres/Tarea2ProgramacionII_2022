#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class empleado {

    int idEmpleado;
    string nombre;
    string apellido;
    string email;
    int tipoEmpleado;
    int idSupervisor;
    vector<empleado *> subEmpleados;

    public:
    empleado();
    ~empleado();

    int ObtenerIdEmpleado();
    int ObtenerIdSupervisor();

    void insertarSub(empleado *subEmpleado);

    friend istream& operator >> (istream &o, empleado *empleado);
    friend ostream& operator << (ostream &o, const empleado *empleado);
};

#endif
