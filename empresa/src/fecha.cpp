#include "fecha.h"

fecha::fecha(int d, int m, int a)
{
    dia=d;
    mes=m;
    anio=a;
}
void fecha::setDia(int d)
{
    if(d>0 && d<32)
    {
        dia=d;
    }
}
void fecha::setMes(int m)
{
    mes=m;
}
void fecha::setAnio(int a)
{
    anio=a;
}
void fecha::setearFecha(int d, int m, int a)
{
    dia=d;
    mes=m;
    anio=a;
}
int fecha::getDia()
{
    return dia;
}
int fecha::getMes()
{
    return mes;
}
int fecha::getAnio()
{
    return anio;
}
void fecha::Cargar()
{
    cout<<"DIA: ";
    cin>>dia;
    cout<<"MES: ";
    cin>>mes;
    cout<<"ANIO: ";
    cin>>anio;
}
void fecha::Mostrar()
{
    cout<<dia<<"/"<<mes<<"/"<<anio;
}
