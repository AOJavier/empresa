#include "funciones.h"
#include <iostream>
#include<cstring>
using namespace std;
#include "empre.h"
#include "ArchivoEmpresa.h"
#include "Municipios.h"
#include "ArchivoMunicipios.h"


void cargarCadena(char *palabra, int tamano){

    int i=0;

    fflush(stdin);

    for (i=0; i<tamano; i++){

        palabra[i]=cin.get();

        if (palabra[i]=='\n'){

            break;

        }

    }

    palabra[i]='\0';

    fflush(stdin);

}

void altaEmpresa(){
   empre reg;
   ArchivoEmpresa archiEmp("empresas.dat");
   reg.Cargar();
archiEmp.GrabarRegistro(reg);
}
void BuscarEmpresas(){
empre reg;
ArchivoEmpresa archiEmp("empresas.dat");
cout <<"INGRESE EL NRO DE EMPRESA QUE BUSCA :" ;
int numero;
cin >>numero;
int pos =archiEmp.BuscarRegistro(numero);
if(pos<0){
    cout << "NO EXISTE LA EMPRESA ";
}
reg= archiEmp.LeerRegistro(pos);
reg.Mostrar();

}
void listarEmpresas(){

ArchivoEmpresa archiEmp("empresas.dat");
archiEmp.ListarRegistro();
}
void bajaLogica(){

empre reg;
ArchivoEmpresa archiEmp("empresas.dat");
cout <<"INGRESE EL NRO DE EMPRESA A BORRA ";
int num;
cin>> num;
int pos=archiEmp.BuscarRegistro(num);
if (pos<0){
    cout <<"NO SE ENCUENTRA EL REGISTRO";
    return;
    }
reg=archiEmp.LeerRegistro(pos);
reg.Mostrar();
cout << "ESTA SEGURO QUE QUIERE ELIMINAR EL REGISTRO? S/N ";
char respuesta;
cin>> respuesta;
if(respuesta=='S'|| respuesta=='s'){
    cout << endl;
reg.setEstado(false);
if(archiEmp.ModificarRegistro(reg,pos)){
    cout<< "REGISTRO ELIMINADO";
}
else{
    cout<<"NO SE PUDO ELIMINAR EL REGISTRO";
    }
    cout << endl;

}

}
void modificarRegistro(){
empre reg;
ArchivoEmpresa archiEmp("empresas.dat");
cout << "INGRESE EL NRO EMPRESA QUE QUIERE MODIFICAR :";
int num;
cin >> num;
int pos = archiEmp.BuscarRegistro(num);
if (pos<0){
    cout << "NO SE ENCONTRO EL ARCHIVO";
}
reg=archiEmp.LeerRegistro(pos);
reg.Mostrar();
cout << "ESTA SEGURO QUE QUIERE MODIFICAR EL REGISTRO? S/N ";
char respuesta;
cin>> respuesta;
if(respuesta=='S'|| respuesta=='s'){
    cout <<"INGRESE LA CANTIDAD DE EMPLEADOS:";
    int cant;
    cin >> cant;
    reg.setEmpleado(cant);
if (archiEmp.ModificarRegistro(reg,pos)){
    cout<< "REGISTRO MODIFICADO"<< endl;
    reg=archiEmp.LeerRegistro(pos);
    return reg.Mostrar();
}
else{
    cout << "NO SE PUDO MODICAR EL REGISTRO "<<endl;
}
}


}

void municipioMas5(){
    int empresasMunicipios[135]={};
    empre reg;
    ArchivoEmpresa archiEmp;
    int cantReg=archiEmp.ContarRegistro();
    for (int i=0;i<135;i++){

        reg=archiEmp.LeerRegistro(i);
        empresasMunicipios[reg.getMunicipio()-1]++;
            }
    cout <<"MUNICIPIO CON MAS 5 EMPRESAS"<< endl;
    for (int i=0;i<135;i++){
        if (empresasMunicipios[i]>5){
            cout <<"NRO DE EMPRESA : "<< i <<endl;
        }
    }


}
void listarPorCategoria(){
empre reg;
ArchivoEmpresa archiEmp;
int categoria;
int cantReg=archiEmp.ContarRegistro();
if (cantReg<=0){
    cout <<"ARCHIVO INEXISTENTE"<< endl;
return;
}
cout << "CATEGORIA A LISTAR "<< endl;
cin >> categoria;
for (int i=0;i<cantReg;i++){
    reg=archiEmp.LeerRegistro(i);
    if (reg.getCategoria()==categoria){
        reg.Mostrar();
        cout << endl;
    }
}
}



void altaMunicipios(){
   Municipios reg;
   ArchivoMunicipios archiM("Municipios.dat");
   reg.Cargar();
archiM.GrabarRegistro(reg);
}
void bajaMunicipios(){
Municipios reg;
ArchivoMunicipios archiM("Municipios.dat");
cout <<"INGRESE EL NRO DE MUNICIPIOS QUE QUIERE BORRAR ";
int num;
cin>> num;
int pos=archiM.BuscarRegistro(num);
if (pos<0){
    cout <<"NO SE ENCUENTRA EL REGISTRO";
    return;
    }
reg=archiM.LeerRegistro(pos);
reg.Mostrar();
cout << "ESTA SEGURO QUE QUIERE ELIMINAR EL REGISTRO? S/N ";
char respuesta;
cin>> respuesta;
if(respuesta=='S'|| respuesta=='s'){
    cout << endl;
reg.setEstado(false);
if(archiM.ModificarRegistro(reg,pos)){
    cout<< "REGISTRO ELIMINADO";
}
else{
    cout<<"NO SE PUDO ELIMINAR EL REGISTRO";
    }
    cout << endl;

}
}
void ListarMunicipios(){
ArchivoMunicipios archiM("Municipios.dat");
archiM.ListarRegistro();

}
void ModificarCantHabitantes(){
}
void ListarSeccion(){
Municipios reg;
ArchivoMunicipios archiM;
int seccion;

int cantSeccion=archiM.ContarRegistro();
if (cantSeccion<=0){

    cout<<"ARCHIVO INEXISTENTE"<< endl;
    return;

}
cout <<"SECCION DE LOS MUNICIPIOS A LISTAR ";
cin >> seccion;
for (int i=0;i<cantSeccion;i++){
    reg=archiM.LeerRegistro(i);
    if(reg.getSeccion()==seccion){
        reg.Mostrar();
        cout << endl;
    }

}
}
//ArchivoEmpresa archiEmp("empresas.dat");
//archiEmp.listarRegistro();


