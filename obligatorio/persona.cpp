#include "persona.h"

long int getCedula(persona p){
    return p.cedula;
}

string getNombre(persona p){
    return p.nombre;
}

void setCedula(persona p, long int cedula){
    p.cedula = cedula;
}

void setNombre(persona p, string nombre){
    p.nombre = nombre;
}
