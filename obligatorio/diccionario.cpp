#include "diccionario.h"

void Make(Diccionario &d){
    for(int i=0; i<MAX_P; i++){
        d[i] = NULL;
    }
}

bool Member(Diccionario d, long clave){
    bool result = false;
    int pos = dispercion(clave);
    Lista aux = d[pos];

    while(aux != NULL){
        if(getCedula(aux->info)==clave)
            result = true;

        aux = aux->sig;
    }

    return result;
}

void Insert(Diccionario &d, Persona p){
    int pos = dispercion(getCedula(p));
    Lista aux;
    Lista l = d[pos];

    aux = new nodo;
    aux->info = p;
    aux->sig = l;
    d[pos] = aux;
}

Persona Find(Diccionario d, long clave){
    int pos = dispercion(clave);
    Lista aux = d[pos];

    while(getCedula(aux->info)!=clave){
        aux=aux->sig;
    }

    return aux->info;
}

void Modify(Diccionario &d, Persona p){
    int pos = dispercion(getCedula(p));
    Lista aux = d[pos];

    while(getCedula(aux->info)!=getCedula(p)){
        aux = aux->sig;
    }

    aux->info = p;
}

void Delete(Diccionario &d, long clave){
    int pos = dispercion(clave);
    Lista aux = d[pos];

    if(aux->sig == NULL){
        delete aux;
        aux = NULL;
    }else{
        while(getCedula(aux->sig->info)!=clave){
            aux = aux->sig;
        }

        Lista temp = aux->sig;
        aux = temp->sig;
        delete temp;
    }
}

bool Empty(Diccionario d){
    bool isEmpty = true;
    int i=0;

    while(i<MAX_P && !isEmpty){
        if(d[i] != NULL)
            isEmpty=false;

        i++;
    }

    return isEmpty;
}

Persona GetMaxWalker(Diccionario d){
    Persona maxWalker = d[0]->info;

    for(int i=0; i<MAX_P; i++){
        Lista aux = d[i];
        while(aux != NULL){
            if(DarTamanioLista(getLista(aux->info))>DarTamanioLista(getLista(maxWalker))){
                maxWalker = d[i]->info;
            }

        }
    }

    return maxWalker;
}

void FindByStep(Diccionario d,int p){

    for(int i = 0; i < MAX_P; i++){
        Lista peoples = d[i];
        while(peoples != NULL){
            if(CaminoPorPasos(peoples->info,p)){
                //Imprimo datos de la persona
                Imprimir(peoples->info);
            }
        }
    }
}
