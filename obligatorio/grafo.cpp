#include "grafo.h"

void Crear(Grafo &g)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            g[i][j] = 0;
        }
    }

}

bool PerteneceVertice(Grafo g, int v)
{
    return v >= 0  && v <= N;

}

bool PerteneceArista(Grafo g, int v1, int v2)
{
    return g[v1][v2] == 1;
}

void InsertarArista(Grafo &g, int i,int j)
{

    if(i != j)
    {
        g[i][j] = 1;
        g[j][i] = 1;
    }
    else
    {
        g[i][j] = 2;
    }

}

int GradoVertice(Grafo g,int v)
{
    int cont =0;
    for(int i=0; i<N; i++)
    {
        cont += g[i][v];
    }
    return cont;
}

void ImprimirGrafo(Grafo g)
{
    for(int i=0; i<N; i++)
    {
        printf("%d| ",i);
        for(int j=0; j<N; j++)
        {
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }
}


int Distancia(Grafo G, int u, int v)
{
    int dist = 0;
    bool visitado [N];
    for (int i = 0; i < N; i++)
        visitado [i] = false;
    DFS (G, u, v, visitado, dist);
    for(int r = 0; r<N; r++){
        if(visitado[r]){
            printf("%d visitado\n",r);
        }
    }
    return dist;
}

void DFS(Grafo G, int actual, int v, bool visitado [N], int & dist)
{
    visitado [actual] = true;

    int j = 0;

    while (j < N && !visitado [v])
    {

        if (G [actual][j] == 1)
        {
            if (!visitado [j]){
                printf("* {%d,%d} * ",actual,j);
                dist++;
                DFS (G, j, v, visitado, dist);
                if (!(visitado [v])){
                   printf("# vuelvo {%d,%d} # ",actual,j);
                   dist++;
                }


            }

        }
        j++;
    }

}


