#ifndef PLANILLA_H
#define PLANILLA_H

#include "empleado.h"
#include "empleadoAsalariado.h"
#include "empleadoPorHoras.h"
#include <map>

using namespace std;

class planilla {

    istream *streamPersonas;
    istream *streamNomina;
    istream *streamHoras;
    
    empleado *empleadoRaiz;
    map<int, empleado*> indiceEmpleados;
    map<int, float> indiceNomina;
    map<int, float> indiceHoras;
    
    public:
    planilla(istream *streamPersonasNuevo, istream *streamNominaNuevo, istream *streamHorasNuevo);
    ~planilla();

    void agregarEmpleado(empleado *nuevoEmpleado);
    empleado* obtenerEmpleado(int idBuscado);
    float obtenerSubtotal();
    float obtenerImpuestos();
    float obtenerTotal();

    friend ostream& operator << (ostream &o, planilla *planilla);
};

#endif
