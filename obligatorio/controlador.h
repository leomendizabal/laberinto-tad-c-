#ifndef CONTROLADOR_H_INCLUDED
#define CONTROLADOR_H_INCLUDED
#include "personas.h"
#include "laberinto.h"
#include "utils.h"


void LeerCantidadConexion(Laberinto &g);

void MostrarLaberinto(Laberinto g);

void InicializarConexiones(Laberinto &g,int conexiones);

bool validarConexiones(int m);

void RegistrarPersona(Personas &d);

void ListarPersonasPorPasos(Personas d);

void PersonaMayorCantidadPaseos(Personas d);

void ListarPaseos(Personas d);

void EjecutarCamino(Laberinto g, Personas &d);

#endif // CONTROLADOR_H_INCLUDED
