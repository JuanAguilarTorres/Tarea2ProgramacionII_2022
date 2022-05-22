#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <iostream>

using namespace std;

class empleado {

    int idEmpleado;
    string nombre;
    string apellido;
    string email;
    int tipoEmpleado;
    int idSupervisor;

    public:
    empleado();
    empleado(int idEmpleado, string nombre, string apellido, string email, int tipoEmpleado, int idSupervisor);
    ~empleado();

    friend istream& operator >> (istream &o, empleado *empleado);
    friend ostream& operator << (ostream &o, const empleado *empleado);
};

#endif
