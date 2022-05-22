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

    archivoPrueba.close();
    
    ofstream ofs("Reporte.csv", std::ifstream::out);

    if (!ofs.is_open())
    {
        std::cerr << "Error leyendo archivo Reporte.txt" << std::endl;
        return -1;
    }

    ofs << "Reporte: " << endl << laPlanilla;

    ofs.close();

    delete laPlanilla;
}