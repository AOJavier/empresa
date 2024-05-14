#include "ArchivoEmpresa.h"


ArchivoEmpresa::ArchivoEmpresa(const char *n)
{
    strcpy(_nombre,n);

}
bool  ArchivoEmpresa::GrabarRegistro(empre aux)
{
    FILE *p;
    p=fopen(_nombre,"ab");
    if(p==NULL)return false;
    bool escribio = fwrite(&aux,sizeof aux,1,p);
    fclose(p);
    return escribio;
}
empre  ArchivoEmpresa::LeerRegistro(int pos)
{
    FILE *p;
    empre aux;
    p=fopen(_nombre,"rb");
    aux.setnroEmpresa(-5);
    if(p==NULL)return aux;
    fseek(p,pos*sizeof aux,0);
    fread(&aux,sizeof aux,1,p);
    fclose(p);
    return aux;



}
int  ArchivoEmpresa::BuscarRegistro(int num)
{


    FILE *p;
    empre aux;
    p=fopen(_nombre,"rb");
    int pos=0;
    if(p==NULL)return -1;
    while(fread(&aux,sizeof aux,1,p)==1)
    {
        if(aux.getnroEmpresa()==num)
        {
            fclose(p);
            return pos;
        }
        pos++;

    }
    fclose(p);
    return -2;

}
int  ArchivoEmpresa::ContarRegistro()
{
FILE *p;
p=fopen(_nombre,"rb");
if(p==NULL)return -1;
fseek(p,0,2);
int tam=ftell(p);
fclose(p);
return tam/sizeof(empre);

}
bool ArchivoEmpresa::ModificarRegistro(empre aux, int pos)
{
    FILE *p;
    p=fopen(_nombre,"rb+");
    if(p==NULL)return false;
    fseek(p,pos*sizeof aux,0);
    bool escribio=fwrite(&aux,sizeof aux,1,p);
    fclose(p);
    return escribio;
}
bool ArchivoEmpresa::ListarRegistro()
{
    FILE *p;
    empre aux;
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

