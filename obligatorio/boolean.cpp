#include "boolean.h"

void Cargar (Boolean &b)
{
    int valor;
    scanf("%d",&valor);
    switch (valor)
    {
    case 0:
        b=FALSE;
        break;
    case 1:
        b=TRUE;
        break;
    default:
        b=FALSE;
        break;
    }
}

void Mostrar (Boolean b)
{
    switch (b)
    {
    case 0:
        printf("El valor es FALSE\n");
        break;
    case 1:
        printf("El valor es TRUE\n");
        break;
    }
}

