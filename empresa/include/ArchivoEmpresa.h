#ifndef ARCHIVOEMPRESA_H
#define ARCHIVOEMPRESA_H
#include <iostream>
using namespace std;
#include "empre.h"




class ArchivoEmpresa : empre
{
private:
    char _nombre[30];
public:
    ArchivoEmpresa(const char *n= "empresas.dat");
    bool GrabarRegistro(empre aux);
    empre LeerRegistro(int pos);
    int BuscarRegistro(int num);
    int ContarRegistro();
    bool ModificarRegistro(empre aux, int pos);
    bool ListarRegistro();

};

#endif // ARCHIVOEMPRESA_H
