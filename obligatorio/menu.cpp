#include "menu.h"


void MostrarEtiqueta(int indice)
{

    switch(indice)
    {
    case OPCION_MENU_1:
        printf("");
        break;
    case OPCION_MENU_2:
        printf("");
        break;
    case OPCION_MENU_3:
        printf("");
        break;
    case OPCION_MENU_4:
        printf("");
        break;
    case OPCION_MENU_5:
        printf("");
        break;
    case OPCION_MENU_6:
        printf("");
        break;
    case OPCION_MENU_7:
        printf("");
        break;
    case OPCION_MENU_SALIR:
        printf(" 8 - Salir:");
        break;
    default:
        printf("Opcion no implementada");
        break;

    }

}

int ValidarIndice(int indice)
{   int valido = 0;
    switch(indice)
    {
    case OPCION_MENU_1:
        valido = OPCION_MENU_1;
        break;
    case OPCION_MENU_2:
         valido = OPCION_MENU_2;
         break;
    case OPCION_MENU_3:
         valido = OPCION_MENU_3;
         break;
    case OPCION_MENU_4:
         valido = OPCION_MENU_4;
         break;
    case OPCION_MENU_5:
         valido = OPCION_MENU_5;
         break;
    case OPCION_MENU_6:
         valido = OPCION_MENU_6;
         break;
    case OPCION_MENU_7:
         valido = OPCION_MENU_7;
         break;
    default:
         valido = -1;
         break;
    }

}

void MenuPrincipal(int &opcion)
{
    printf("1. .\n");
    printf("2. .\n");
    printf("3. .\n");
    printf("4. .\n");
    printf("5. .\n");
    printf("6. .\n");
    printf("7. .\n");
    printf("8. Salir del menu.\n");
    scanf("%d",&opcion);
}

void EjecutarAccion(Grafo &g, int accion){
    switch(accion)
    {
    case OPCION_MENU_1:
        LeerCantidadConexion(g);
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
    default:

         break;
    }


}
