#include "menu.h"


void MostrarEtiqueta(int indice)
{

    switch(indice)
    {
    case OPCION_MENU_1:
        printf("Generar conexiones.");
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
    printf("1. Generar conexiones\n");
    printf("2. Mostrar laberinto\n");
    printf("3. Registrar persona\n");
    printf("4. Realizar paseo\n");
    printf("5. Listar paseos\n");
    printf("6. Persona con mayor cantidad de paseos\n");
    printf("7. Listar personas con menor cantidad de pasos\n");
    printf("8. Salir del menu.\n");
    scanf("%d",&opcion);
}

void EjecutarAccion(Grafo &g, Diccionario &d, int accion){
    switch(accion)
    {
    case OPCION_MENU_1:
        LeerCantidadConexion(g);
        break;
    case OPCION_MENU_2:
        MostrarLaberinto(g);
         break;
    case OPCION_MENU_3:
        RegistrarPersona(d);
        break;
    case OPCION_MENU_4:
        EjecutarCamino(g,d);
        break;
    case OPCION_MENU_5:
        ListarPaseos(d);
        break;
    case OPCION_MENU_6:
        PersonaMayorCantidadPaseos(d);
        break;
    case OPCION_MENU_7:
        ListarPersonasPorPasos(d);
        break;
    default:
         printf("Accion no soportada.\n");
         break;
    }
}

