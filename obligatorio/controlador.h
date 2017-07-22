#ifndef CONTROLADOR_H_INCLUDED
#define CONTROLADOR_H_INCLUDED
#include"grafo.h"
#include"utils.h"


void LeerCantidadConexion(Grafo &g);

void MostrarLaberinto(Grafo g);

void InicializarConexiones(Grafo &g,int conexiones);

bool validarConexiones(int m);

#endif // CONTROLADOR_H_INCLUDED
