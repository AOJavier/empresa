#include "empre.h"



empre::empre (int e, const char *no,int ce,int cat,int m,bool es)
{

    _nroempresa=e;
    strcpy(_nombre,no);
    _cantEmpleado=ce;
    _categoria = cat;
    _nroMunicipio=m;
    _estado=es;
}

void empre::setnroEmpresa(int e)
{
    if (e>0 && e<5000)
    {
        _nroempresa=e;
    }
}
void empre::setNombre(const char *no){
     strcpy(_nombre,no);

}
void empre::setEmpleado(int ce)
{
    if (ce>0 && ce<5000)
    {
        _cantEmpleado=ce;
    }
}
void empre::setCategoria(int cat)
{
    if (cat>0&&cat<=80)
    {
        _categoria=cat;
    }
}
void empre::setMunicipio(int m)
{
    if(m>0&&m<136)
    {
        _nroMunicipio=m;
    }
}
void empre::setEstado (bool es)
{
    if (es==true)
    {
        cout << "Activo"<< endl;
    }
    else
    {
        cout << "Inactivo "<< endl;
    }
}

int empre::getnroEmpresa ()
{
    return _nroempresa;
}
const char *empre::getNombre()
{
    return _nombre;
}
int empre::getEmpleado()
{
    return _cantEmpleado;
}
int empre::getCategoria()
{
    return _categoria;
}
int empre::getMunicipio()
{
    return _nroMunicipio;
}
bool empre::getEstado()
{
    return _estado;
}

void empre::Cargar()
{
    cout <<"Ingrese el nro de la empresa: ";
    cin>> _nroempresa;
    cout << "Ingrese el nombre de la empresa: ";
    cargarCadena(_nombre,29);
    cout<< "Ingrese la cantidad de empleados: ";
    cin >> _cantEmpleado;
    cout <<"Ingresa la categoria del 1 al 80: ";
    cin >>_categoria;
    cout << "Ingrese el Nro de Municipio que pertenece 1 al 135: ";
    cin >>_nroMunicipio;
    _estado=true;

}
void empre::Mostrar()
{
    if (_estado==true){
    Municipios obj;
    cout << "Nro de Empresa : "<< _nroempresa << endl;
    cout << "Nombre de Empresa : "<< _nombre << endl;
    cout << "Cantidad de Empleados: "<< _cantEmpleado << endl;
    cout << "Nro de Categoria  : "<< _categoria << endl;
    cout << "Nro de Municipio : "<<_nroMunicipio << endl;
    obj=BuscarMunicipio(_nroMunicipio);
    cout << "NOMBRE DEL MUNICIPIO :" <<obj.getNombre() << endl;



    }

}
Municipios empre::BuscarMunicipio(int num){
Municipios reg;
ArchivoMunicipios archiM;
int pos= archiM.BuscarRegistro(num);
reg=archiM.LeerRegistro(pos);
return reg;
}
