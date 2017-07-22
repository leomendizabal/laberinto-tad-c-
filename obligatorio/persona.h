#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "lista_paseos.h"
#include "string.h"

typedef struct {
    long int cedula;
    string nombre;
    ListaPaseos paseos;
} Persona;

void CrearPersona(Persona &p,long int cedula,string nombre);

long int getCedula(Persona p);

string getNombre(Persona p);

void setCedula(Persona &p, long int cedula);

void setNombre(Persona &p, string nombre);

void agregarPaseo(Persona &p,Paseo pas);

#endif // PERSONA_H_INCLUDED
