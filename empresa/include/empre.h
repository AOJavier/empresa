#ifndef EMPRE_H
#define EMPRE_H
#include<cstring>
#include<iostream>
using namespace std;
#include "funciones.h"
#include "fecha.h"
#include "Municipios.h"
#include "ArchivoMunicipios.h"


class empre : private fecha
{
  private:
    int _nroempresa;
    char _nombre[30];
    int _cantEmpleado;
    int _categoria;
    int _nroMunicipio;
    bool _estado=false;

    public:
       empre (int e=0, const char *no="S/N",int ce=0,int cat=0,int m=0,bool es=true);

        void setNombre(const char *n);
        void setEmpleado(int ce);
        void setEstado (bool es);
        void setnroEmpresa(int e);
        void setCategoria(int cat);
        void setMunicipio(int m);


        int getnroEmpresa ();
        const char *getNombre();
        int getEmpleado();
        int getCategoria();
        int getMunicipio();
        bool getEstado();

        void Cargar();
        void Mostrar();
        Municipios BuscarMunicipio(int num);
};
#endif // EMPRE_H
