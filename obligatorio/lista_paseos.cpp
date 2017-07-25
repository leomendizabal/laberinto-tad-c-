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

void MostrarLista(ListaPaseos l){
    while(l!= NULL)
    {
        MostrarPaseo(l->info);
        printf("\n");
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

int DarTamanioLista(ListaPaseos l){
    int total=0;
    ListaPaseos aux = l;

    while(aux != NULL){
        total++;
        aux = aux->sig;
    }

    return total;
}

bool MenorPorPasos(ListaPaseos l, int pasos){
    bool result = false;
    while(l != NULL && !result){
        if(HaySalida(l->info) && DarCantPuntos(l->info) < pasos){
            result = true;
        }
        l= l->sig;
    }
    return result;
}
