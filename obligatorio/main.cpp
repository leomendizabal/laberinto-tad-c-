#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "menu.h"

int main()
{
    //Declaraciones
    bool salir = false;
    int opcion = -1;
    Grafo g;
    Diccionario d;
    Crear(g);
    Make(d);

    //Inicializar random
    srand(time(NULL));
    do
    {
        MenuPrincipal(opcion);
        switch(opcion)
        {
        case OPCION_MENU_1:
            EjecutarAccion(g,d,OPCION_MENU_1);
            break;
        case OPCION_MENU_2:
            EjecutarAccion(g,d,OPCION_MENU_2);
            break;
        case OPCION_MENU_3:
            EjecutarAccion(g,d,OPCION_MENU_3);
            break;
        case OPCION_MENU_4:
            int v1, v2;
            int dist;
            dist = 0;
            printf("Leeo 1:");scanf("%d",&v1);
            printf("Leeo 2:");scanf("%d",&v2);
            dist = Distancia(g,v1,v2);
            printf("Distancia: %d \n",dist);
            break;
        case OPCION_MENU_5:
            break;
        case OPCION_MENU_6:
            break;
        case OPCION_MENU_7:
            break;
        case OPCION_MENU_SALIR:
            salir = true;
            break;
        default:
            printf("Opcion no implementada");
            break;
        }


    }
    while(!salir);


}



