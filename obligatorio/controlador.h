#ifndef CONTROLADOR_H_INCLUDED
#define CONTROLADOR_H_INCLUDED
#include "diccionario.h"
#include "grafo.h"
#include "utils.h"


void LeerCantidadConexion(Grafo &g);

void MostrarLaberinto(Grafo g);

void InicializarConexiones(Grafo &g,int conexiones);

bool validarConexiones(int m);

void RegistrarPersona(Diccionario &d);

void ListarPaseos(Diccionario d,long int ci);

#endif // CONTROLADOR_H_INCLUDED
