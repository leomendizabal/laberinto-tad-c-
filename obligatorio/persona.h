#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "lista_paseos.h"

typedef struct {
    long int cedula;
    string nombre;
    ListaPaseos paseos;
} Persona;

long int getCedula(Persona p);
string getNombre(Persona p);

#endif // PERSONA_H_INCLUDED
