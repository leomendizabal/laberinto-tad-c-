#ifndef LISTA_PASEOS_H_INCLUDED
#define LISTA_PASEOS_H_INCLUDED
#include <iostream>
#include "paseo.h"
#include "string.h"

typedef struct nodoP{
    Paseo info;
    nodoP *sig;
} NodoLista;

typedef NodoLista * ListaPaseos;

void CrearLista(ListaPaseos &l);

bool EsVacia(ListaPaseos l);

void InsUltimo(ListaPaseos &l, Paseo info);

void MostrarLista(ListaPaseos l);

void EliminarLista(ListaPaseos &l);

#endif // LISTA_PASEOS_H_INCLUDED
