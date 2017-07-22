#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include <iostream>
#include<stdio.h>
#include<stdlib.h>

const int N = 10; /* cantidad de vertices */
typedef int Grafo[N][N];

void Crear(Grafo &g);

bool PerteneceVertice(Grafo g, int v);

bool PerteneceArista(Grafo g , int v1, int v2);

void InsertarArista(Grafo &g, int i,int j);

int GradoVertice(Grafo g,int v);

void ImprimirGrafo(Grafo g);

#endif // GRAFO_H_INCLUDED
