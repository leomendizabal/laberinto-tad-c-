#include "persona.h"

void CrearPersona(Persona &p,long int cedula,string nombre)
{
   setCedula(p,cedula);
   setNombre(p,nombre);
   setCantP(p,0);
   CrearLista(p.paseos);
}

long int getCedula(Persona p){
    return p.cedula;
}

void getNombre(Persona p,string &n){
    strcop(n,p.nombre);
}

ListaPaseos getLista(Persona p){
    return p.paseos;

}

void setCedula(Persona &p, long int cedula){
    p.cedula = cedula;
}

void setNombre(Persona &p, string nombre){
    strcop(p.nombre,nombre);
}

void setCantP(Persona &p, int cantidad){
    p.cantp = cantidad;
}

int getCantP(Persona p){
    return p.cantp;
}

void agregarPaseo(Persona &p,Paseo pas)
{
    p.cantp++;
    CargarNumero(pas,p.cantp);
    InsUltimo(p.paseos,pas);

}

bool CaminoPorPasos(Persona p, int pasos){
    return MenorPorPasos(p.paseos,pasos);

}

void Imprimir(Persona p){
    string temp;
    strcrear(temp);
    printf("%ld \n",getCedula(p));
    getNombre(p,temp);
    print(temp);
    printf("\n");
}
