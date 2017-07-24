#include "persona.h"

void CrearPersona(Persona &p,long int cedula,string nombre)
{
   setCedula(p,cedula);
   setNombre(p,nombre);
   CrearLista(p.paseos);
}

long int getCedula(Persona p){
    return p.cedula;
}

void getNombre(Persona p,string &n){
    strcop(p.nombre,n);
}

void setCedula(Persona &p, long int cedula){
    p.cedula = cedula;
}

void setNombre(Persona &p, string nombre){
    strcop(p.nombre,nombre);
}

void agregarPaseo(Persona &p,Paseo pas)
{
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
}
