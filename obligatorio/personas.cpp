#include "personas.h"

void Make(Personas &d){
    for(int i=0; i<MAX_P; i++){
        d[i] = NULL;
    }
}

bool Member(Personas d, long clave){
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

void Insert(Personas &d, Persona p){
    int pos = dispercion(getCedula(p));
    Lista aux;
    Lista l = d[pos];

    aux = new nodo;
    aux->info = p;
    aux->sig = l;
    d[pos] = aux;
}

Persona Find(Personas d, long clave){
    int pos = dispercion(clave);
    Lista aux = d[pos];

    while(getCedula(aux->info)!=clave){
        aux=aux->sig;
    }

    return aux->info;
}

void Modify(Personas &d, Persona p){
    int pos = dispercion(getCedula(p));
    Lista aux = d[pos];

    while(getCedula(aux->info)!=getCedula(p)){
        aux = aux->sig;
    }

    aux->info = p;
}

void Delete(Personas &d, long clave){
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

bool Empty(Personas d){
    bool isEmpty = true;
    int i=0;

    while(i<MAX_P && isEmpty){
        if(d[i] != NULL)
            isEmpty=false;

        i++;
    }

    return isEmpty;
}

Persona GetMaxWalker(Personas d){
    Persona maxWalker;
    int x=0;
    bool existe= d[x] != NULL;

    while(!existe && x<MAX_P){
        x++;
        existe= d[x] != NULL;
    }

    maxWalker = d[x]-> info;

    for(int i=x; i<MAX_P; i++){
        Lista aux = d[i];
        while(aux != NULL){
            if(getCantP(aux->info)>getCantP(maxWalker)){
                maxWalker = aux->info;
            }
            aux = aux ->sig;
        }
    }

    return maxWalker;
}

void FindByStep(Personas d,int p){

    for(int i = 0; i < MAX_P; i++){
        Lista peoples = d[i];
        while(peoples != NULL){
            if(CaminoPorPasos(peoples->info,p)){
                //Imprimo datos de la persona
                Imprimir(peoples->info);
            }
            peoples = peoples->sig;
        }
    }
}
