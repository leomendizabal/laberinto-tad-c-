#include "controlador.h"

void LeerCantidadConexion(Grafo &g){
    int m = 0;
    bool salir = false;
    do{
        printf("Ingrese cantidad de conexiones (0-Para salir): ");
        scanf("%d",&m);
        if(validarConexiones(m)){
                salir = true;
            InicializarConexiones(g,m);
        }else{
            if(m != 0){
              printf("Ingrese al menos %d conexiones.\n",N);
            }
        }
    }while(m == 0 || !salir);

}

void MostrarLaberinto(Grafo g){
    ImprimirIndice(N);
    ImprimirGrafo(g);
}

void InicializarConexiones(Grafo &g,int conexiones)
{
    int i = 0;
    int randomI = 0;
    int randomJ = 0;
    Crear(g);
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
    return (m >= N && m <= getMaxNumber(N));
}
