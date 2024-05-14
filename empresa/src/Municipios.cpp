#include "Municipios.h"

Municipios::Municipios(bool es){
_estado=es;
}

void Municipios::setNumero(int n){
    _numero=n;
}

void Municipios::setNombre(const char *no){

    strcpy(_nombre,no);
}

void Municipios::setSeccion(int s){

    _seccion=s;
}

void Municipios::setCantHabitantes(int c){

_cantHabitantes=c;
}

void Municipios::setEstado(bool e){
_estado=e;

}

int Municipios::getNumero(){
    return _numero;

}
const char *Municipios::getNombre(){
return _nombre;
}

int Municipios::getSeccion(){
return _seccion;
}
bool Municipios::getEstado(){
return _estado;
}

void Municipios::Cargar(){

cout << "INGRESE NUMERO DE MUNICIPIO 1 A 135:";
cin>>_numero;
    if (_numero<1&& _numero>135){
        return;
    }
cout <<"INGRESE NOMBRE DE MUNICIPIO :";
cargarCadena(_nombre,29);
cout << "INGRESE LA SECCION 1 A 6 :";
cin >> _seccion;
cout << "INGRESE LA CANTIDAD DE HABITANTES :";
cin >> _cantHabitantes;
_estado=true;
}
void Municipios::Mostrar(){
if (_estado==true){
cout << "NUMERO DE MUNICIPIO :"<<_numero<< endl;
cout << "NOMBRE DE MUNICIPIO :"<< _nombre << endl;
cout << "SECCION :"<< _seccion <<endl;
cout << "CANTIDAD DE HABITANTES :"<< _cantHabitantes<< endl;


}

}




