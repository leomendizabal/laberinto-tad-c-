#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include<stdio.h>
#include "controlador.h"

//Constants
const int OPCION_MENU_1 = 0;
const int OPCION_MENU_2 = 1;
const int OPCION_MENU_3 = 2;
const int OPCION_MENU_4 = 3;
const int OPCION_MENU_5 = 4;
const int OPCION_MENU_6 = 5;
const int OPCION_MENU_7 = 6;
const int OPCION_MENU_SALIR = 8;


void MostrarEtiqueta(int indice);

int ValidarIndice(int indice);

void MenuPrincipal(int &opcion);

void EjecutarAccion(Grafo &g, int accion);

#endif // MENU_H_INCLUDED
