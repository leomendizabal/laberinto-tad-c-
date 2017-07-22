#include "lista_paseos.h"

void CrearLista(ListaPaseos &l){
    l = NULL;
}

bool EsVacia(ListaPaseos l){
    bool vacia = false;
    if(l == NULL)
    {
        vacia = true;
    }
    return vacia;
}

void InsUltimo(ListaPaseos &l, Paseo info){
    if (l == NULL)
    {
        l=new NodoLista;
        l->info = info;
        l->sig = NULL;
    }
    else
        InsUltimo(l->sig,info);

}

void MostrarListaLetras(ListaPaseos l){
    while(l!= NULL)
    {
        MostrarPaseo(l->info);
        printf(" ");
        l= l->sig;
    }
}

void EliminarLista(ListaPaseos &l){
    if(l!=NULL)
    {
        EliminarLista(l->sig);
        delete l;
        l=NULL;
    }
}
