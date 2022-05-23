#include <sstream>
#include <iostream>
#include <string>
#include <fstream>

#include "planilla.h"
#include "empleado.h"

using namespace std;

int main() {

    ifstream personas("personas.txt", std::ifstream::in);
    

    if (!personas.is_open())
    {
        std::cerr << "Error abriendo personas.txt" << std::endl;
        return -1;
    }

    ifstream nomina("nomina.txt", std::ifstream::in);
    

    if (!nomina.is_open())
    {
        std::cerr << "Error abriendo nomina.txt" << std::endl;
        return -1;
    }

    ifstream horastrabajadas("horastrabajadas.txt", std::ifstream::in);
    

    if (!horastrabajadas.is_open())
    {
        std::cerr << "Error abriendo horastrabajadas.txt" << std::endl;
        return -1;
    }

    planilla *laPlanilla = new planilla(&personas, &nomina, &horastrabajadas);

    personas.close();
    nomina.close();
    horastrabajadas.close();
    
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