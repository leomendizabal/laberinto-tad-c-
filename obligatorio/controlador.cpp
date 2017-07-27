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

void RegistrarPersona(Diccionario &d){
    long ci;
    printf("Ingrese cedula: ");
    scanf("%ld", &ci);

    if(!Member(d, ci)){
        Persona p;
        string nombre;

        strcrear(nombre);
        printf("Ingrese nombre: ");
        scan(nombre);
        CrearPersona(p, ci, nombre);
        Insert(d, p);
    }else {
        printf("Ya existe un usuario con esa cedula\n");
    }
}


void ListarPersonasPorPasos(Diccionario d){
     int p;
     printf("Ingrese cantidad de pasos: ");
     scanf("%d",&p);
     FindByStep(d,p);
}

void ListarPaseos(Diccionario d){
    long int ci;
    printf("Ingrese cedula: ");
    scanf("ld", &ci);

    if (Member(d,ci))
    {
        Persona per= Find(d,ci);
        ListaPaseos lis=getLista(per);
        MostrarLista(lis);
    }
    else
        printf("La persona no existe\n");
}

void PersonaMayorCantidadPaseos(Diccionario d){

    if(!Empty(d)){
        Persona maxWalker = GetMaxWalker(d);
        printf("Persona que realizo mayor cantidad de paseos: \n");
        Imprimir(maxWalker);
    }else{
        printf("No hay personas ingresadas\n");
    }
}

void EjecutarCamino(Grafo g, Diccionario &d){
        // Declaraciones
        Persona p;
        Paseo paseo;
        long int cedula = 0;
        bool existe = false;
        int v1, v2;
        int pasos;
        pasos = 0;
        do{
            printf("Ingresa tu cedula: ");
            scanf("%ld",&cedula);
            existe = Member(d,cedula);
            if(!existe){
                printf("La cedula %ld no existe en sistema.\n",cedula);
            }

        }while(!existe && cedula != 0);
        if(cedula != 0){
            p = Find(d,cedula);

            printf("Ingrese entrada:");scanf("%d",&v1);
            printf("Ingresa salida:");scanf("%d",&v2);
            RecorrerCamino(g,v1,v2,pasos);
            CargarPaseo(paseo,v1,v2,pasos);
            agregarPaseo(p,paseo);
            Modify(d,p);

        }


}
