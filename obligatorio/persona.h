#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "string.h"

typedef struct {
    long int cedula;
    string nombre;
    //paseos
} persona;

long int getCedula(persona p);
string getNombre(persona p);

#endif // PERSONA_H_INCLUDED
