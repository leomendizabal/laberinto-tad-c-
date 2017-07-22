#ifndef DICCIONARIO_H_INCLUDED
#define DICCIONARIO_H_INCLUDED
#include <iostream>
#include "utils.h"
#include "persona.h"

typedef struct nodoPe{
    Persona info;
    nodoPe *sig;
} nodo;

typedef nodo * Lista;
const int MAX_P = 100;
typedef Lista Diccionario[MAX_P];

void Make(Diccionario &d);
bool Member(Diccionario d, Persona p);
void Insert(Diccionario &d, Persona p);
Persona Find(Diccionario d, int clave);
void Modify(Diccionario &d, Persona p);
void Delete(Diccionario &d, int clave);
#endif // DICCIONARIO_H_INCLUDED