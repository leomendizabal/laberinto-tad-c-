#include <iostream>
#include<stdio.h>

#include"menu.h"

int main()
{
    //Declaraciones
    bool salir = false;
    int opcion = -1;
    Grafo g;
    Crear(g);
    //Inicializar random
    srand(time(NULL));
    do
    {
        MenuPrincipal(opcion);
        switch(opcion)
        {
        case OPCION_MENU_1:
            EjecutarAccion(g,OPCION_MENU_1);
            break;
        case OPCION_MENU_2:
            break;
        case OPCION_MENU_3:
            break;
        case OPCION_MENU_4:
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



