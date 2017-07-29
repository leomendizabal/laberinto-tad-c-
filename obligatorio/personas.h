#ifndef DICCIONARIO_H_INCLUDED
#define DICCIONARIO_H_INCLUDED
#include <iostream>
#include"persona.h"

typedef struct nodoPe{
    Persona info;
    nodoPe *sig;
} nodo;

typedef nodo * Lista;
const int MAX_P = 100;
typedef Lista Personas[MAX_P];

void Make(Personas &d);
bool Member(Personas d, long clave);
void Insert(Personas &d, Persona p);
Persona Find(Personas d, long clave);
void Modify(Personas &d, Persona p);
void Delete(Personas &d, long clave);

bool Empty(Personas d);
Persona GetMaxWalker(Personas d);
void FindByStep(Personas d,int p);
int dispercion(long int ci);

#endif // DICCIONARIO_H_INCLUDED
