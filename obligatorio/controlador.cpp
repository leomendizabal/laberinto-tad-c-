#include "controlador.h"

void LeerCantidadConexion(Grafo &g){
    int m = 0;
    printf("Ingese cantidad de conexiones: ");
    scanf("%d",m);
    if(validarConexiones(m)){
        InicializarConexiones(g,m);
    }else{
        printf("Tas de vivo muchacho");
    }

}

void InicializarConexiones(Grafo &g,int conexiones)
{
    int i = 0;
    int randomI = 0;
    int randomJ = 0;

    while(i < conexiones)
    {
        do{
            randomI = randomNumber(0,N);
            randomJ = randomNumber(0,N);
        }while(randomI == randomJ);

        if(!PerteneceArista(g,randomI,randomJ)){
            InsertarArista(g,randomI,randomJ);
            i++;
        }

    }

}

bool validarConexiones(int m){
    return m > 0 && getMaxNumber(N);
}
