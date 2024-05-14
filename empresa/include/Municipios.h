#ifndef MUNICIPIOS_H
#define MUNICIPIOS_H
#include <cstring>
#include <iostream>
#include "funciones.h"
using namespace std;


class Municipios
{
    public:
        Municipios(bool es=false);
        void setNumero(int n);
        void setNombre(const char *no);
        void setSeccion(int s);
        void setCantHabitantes(int c);
        void setEstado(bool e);

        int getNumero();
        const char *getNombre();
        int getSeccion();
        int getCantHabitantes();
        bool getEstado();

        void Cargar();
        void Mostrar();




    private:
        int _numero;//1 a 135
        char _nombre[30];
        int _cantHabitantes;
        int _seccion; ///1-6
        bool _estado;///true si esta activo o false si esta borrado
};

#endif // MUNICIPIOS_H
