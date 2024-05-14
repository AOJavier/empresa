#ifndef ARCHIVOMUNICIPIOS_H
#define ARCHIVOMUNICIPIOS_H
#include "Municipios.h"
#include <cstring>
#include <iostream>
using namespace std;


class ArchivoMunicipios
{
private:
    char _nombre[30];
public:
    ArchivoMunicipios(const char *n= "Municipios.dat");
    bool GrabarRegistro(Municipios aux);
    Municipios LeerRegistro(int pos);
    int BuscarRegistro(int num);
    int ContarRegistro();
    bool ModificarRegistro(Municipios aux, int pos);
    bool ListarRegistro();

};
#endif // ARCHIVOMUNICIPIOS_H
