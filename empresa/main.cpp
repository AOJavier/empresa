#include <iostream>
#include "funciones.h"
#include "ArchivoEmpresa.h"
#include "ArchivoMunicipios.h"


using namespace std;

int main()
{
    ArchivoEmpresa archiE("empresas.dat");
    ArchivoMunicipios archiM("Municipios.dat");

    while  (true)
    {
        int opc;
        system("cls");
        cout << "MENU PRINCIPAL "<< endl;
        cout << "---------------"<< endl;
        cout << "1-EMPRESAS "<< endl;
        cout << "2-MUNICIPIOS "<< endl;
        cout << "0- SALIR "<< endl;
        cout << "----------------------------"<< endl;
        cout << "INGRESE UNA OPCION :" << endl;
        cin>> opc;
        system("cls");
        switch(opc)
        {
        case 1:

    while(true)
    {
        int opc;
        system("cls");
        cout << "MENU PRINCIPAL "<< endl;
        cout << "---------------"<< endl;
        cout << "1-ALTA EMPRESA "<< endl;
        cout << "2-BAJA EMPRESA "<< endl;
        cout << "3-MODIFICAR CANTIDAD DE EMPLEADOS "<< endl;
        cout << "4-LISTAR EMPRESA "<< endl;
        cout << "5-BUSCAR EMPRESA POR NUMERO"<< endl;
        cout << "6-CONTAR REGISTRO  "<< endl;
        cout << "7-MUNICIPIO CON MAS 5 EMPRESAS  "<< endl;
        cout << "8-LISTAR POR CATEGORIA  "<< endl;
        cout << "0- VOLVER AL MENU PRINCIPAL "<< endl;
        cout << "----------------------------"<< endl;
        cout << "INGRESE UNA OPCION :" << endl;
        cin>> opc;
        system("cls");
        switch(opc)
        {
        case 1:
            altaEmpresa();

            break;
        case 2:
            bajaLogica() ;
            break;
        case 3:
            modificarRegistro();
            break;
        case 4:
            listarEmpresas();
            break;
        case 5:
           BuscarEmpresas();

            break;
        case 6:
            cout <<"CANTIDAD DE REGISTROS :"<< archiE.ContarRegistro()<< endl;

            break;
        case 7:
            municipioMas5();
            break;
        case 8:
            listarPorCategoria();
            break;
        case 0:
            return main();
        default:
            cout <<"LA OPCION INGRESADA NO ES CORRECTA "<< endl;
            system("pause");
            break;
        }
        system("pause");

    }
    break;

        case 2:
            while(true)
    {
        int opc;
        system("cls");
        cout << "MENU MUNICIPIO "<< endl;
        cout << "---------------"<< endl;
        cout << "1-ALTA MUNICIPIO "<< endl;
        cout << "2-BAJA MUNICIPIO "<< endl;
        cout << "3-MODIFICAR CANTIDAD DE HABITANTES "<< endl;
        cout << "4-LISTAR MUNICIPIOS "<< endl;
        cout << "5-BUSCAR MUNICIPIO POR NUMERO"<< endl;
        cout << "6-CONTAR REGISTRO  "<< endl;
        cout << "7-MUNICIPIO CON MAS 5 EMPRESAS  "<< endl;
        cout << "8-LISTAR POR SECCION  "<< endl;
        cout << "0- VOLVER AL MENU PRINCIPAL "<< endl;
        cout << "----------------------------"<< endl;
        cout << "INGRESE UNA OPCION :" << endl;
        cin>> opc;
        system("cls");
        switch(opc)
        {
        case 1:
            altaMunicipios();

            break;
        case 2:
            bajaMunicipios() ;
            break;
        case 3:
            ModificarCantHabitantes();
            break;
        case 4:
            ListarMunicipios();
            break;
        case 5:
            //buscarEmpresa();
            break;
        case 6:
            cout <<"CANTIDAD DE REGISTROS :"<< archiE.ContarRegistro()<< endl;

            break;
        case 7:
            municipioMas5();
            break;
        case 8:
            ListarSeccion();
            break;
        case 0:
            return main();
        default:
            cout <<"LA OPCION INGRESADA NO ES CORRECTA "<< endl;
            system("pause");
            break;
        }
        system("pause");

    }
            break;
        case 0:
            return 0;
        default:
            cout <<"LA OPCION INGRESADA NO ES CORRECTA "<< endl;
            system("pause");
            break;
        }
        system("pause");

    }


    return 0;
}


