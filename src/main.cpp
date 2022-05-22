#include <sstream>
#include <iostream>
#include <string>
#include <fstream>

#include "planilla.h"
#include "empleado.h"

using namespace std;

int main() {
    
    planilla *laPlanilla = new planilla();

    ifstream archivoPrueba("intento.txt", std::ifstream::in);
    

    if (!archivoPrueba.is_open())
    {
        std::cerr << "Error abriendo intento.txt" << std::endl;
        return -1;
    }

    archivoPrueba >> laPlanilla;

    cout << "Lista de empleados: " << endl << laPlanilla;

    archivoPrueba.close();

    delete laPlanilla;
}