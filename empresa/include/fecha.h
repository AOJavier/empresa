#ifndef FECHA_H
#define FECHA_H
#include<iostream>
using namespace std;



class fecha
{

    private:
        int dia;
        int mes;
        int anio;
    public:
        fecha(int d=1, int m=1, int a=1900);

        void setDia(int d);
        void setMes(int m);
        void setAnio(int a);
        void setearFecha(int d, int m, int a);
        int getDia();
        int getMes();
        int getAnio();
        void Cargar();
        void Mostrar();



};
#endif // FECHA_H
