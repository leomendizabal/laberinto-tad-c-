#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include<stdio.h>
#include "controlador.h"

//Constants
const int OPCION_MENU_1 = 1;
const int OPCION_MENU_2 = 2;
const int OPCION_MENU_3 = 3;
const int OPCION_MENU_4 = 4;
const int OPCION_MENU_5 = 5;
const int OPCION_MENU_6 = 6;
const int OPCION_MENU_7 = 7;
const int OPCION_MENU_SALIR = 8;


void MostrarEtiqueta(int indice);

int ValidarIndice(int indice);

void MenuPrincipal(int &opcion);

void EjecutarAccion(Laberinto &g, Personas &d, int accion);

#endif // MENU_H_INCLUDED
