#include "persona.h"

long int getCedula(Persona p){
    return p.cedula;
}

string getNombre(Persona p){
    return p.nombre;
}

void setCedula(Persona p, long int cedula){
    p.cedula = cedula;
}

void setNombre(Persona p, string nombre){
    p.nombre = nombre;
}
