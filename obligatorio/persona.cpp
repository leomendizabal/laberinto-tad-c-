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

string getNombre(Persona p){
    return p.nombre;
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

void agregarPaseo(Persona &p,Paseo pas)
{
    InsUltimo(p.paseos,pas);
}
