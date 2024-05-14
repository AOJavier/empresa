#include "ArchivoMunicipios.h"

ArchivoMunicipios::ArchivoMunicipios(const char *n)
{
    strcpy(_nombre,n);

}
bool ArchivoMunicipios::GrabarRegistro(Municipios aux)
{
    FILE *p;
    p=fopen(_nombre,"ab");
    if(p==NULL)return false;
    bool escribio = fwrite(&aux,sizeof aux,1,p);
    fclose(p);
    return escribio;
}
Municipios ArchivoMunicipios::LeerRegistro(int pos)
{
    FILE *p;
    Municipios aux;
    p=fopen(_nombre,"rb");
    aux.setNumero(-5);
    if(p==NULL)return aux;
    fseek(p,pos*sizeof aux,0);
    fread(&aux,sizeof aux,1,p);
    fclose(p);
    return aux;



}
int  ArchivoMunicipios::BuscarRegistro(int num)
{


    FILE *p;
    Municipios aux;
    p=fopen(_nombre,"rb");
    int pos=0;
    if(p==NULL)return -1;
    while(fread(&aux,sizeof aux,1,p)==1)
    {
        if(aux.getNumero()==num)
        {
            fclose(p);
            return pos;
        }
        pos++;

    }
    fclose(p);
    return -2;

}
int  ArchivoMunicipios::ContarRegistro()
{
FILE *p;
p=fopen(_nombre,"rb");
if(p==NULL)return -1;
fseek(p,0,2);
int tam=ftell(p);
fclose(p);
return tam/sizeof(Municipios);

}
bool ArchivoMunicipios::ModificarRegistro(Municipios aux, int pos)
{
    FILE *p;
    p=fopen(_nombre,"rb+");
    if(p==NULL)return false;
    fseek(p,pos*sizeof aux,0);
    bool escribio=fwrite(&aux,sizeof aux,1,p);
    fclose(p);
    return escribio;
}
bool ArchivoMunicipios::ListarRegistro()
{
    FILE *p;
    Municipios aux;
    p=fopen(_nombre,"rb");
    if(p==NULL)return false;
    while(fread(&aux,sizeof aux,1,p)==1)
    {
        aux.Mostrar();
        cout << endl;
    }
    fclose(p);
    return true;

}
