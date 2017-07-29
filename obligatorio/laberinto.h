#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include <iostream>
#include<stdio.h>
#include<stdlib.h>

const int N = 6; /* cantidad de vertices */
typedef int Laberinto[N][N];

void Crear(Laberinto &g);

bool PerteneceVertice(Laberinto g, int v);

bool PerteneceArista(Laberinto g , int v1, int v2);

void InsertarArista(Laberinto &g, int i,int j);

int GradoVertice(Laberinto g,int v);

void ImprimirGrafo(Laberinto g);

void RecorrerCamino(Laberinto G, int u, int v, int &p);

void DFS(Laberinto G, int actual, int v, bool visitado [N], int & dist);

#endif // GRAFO_H_INCLUDED
