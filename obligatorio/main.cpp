#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"menu.h"

const int N = 50;

typedef int Matriz[N][N];

int randomNumber(int minNum,int maxNum);
int getMaxNumber(int number);
void loadMtrz(Matriz &m, int connections);

int main()
{
    //Declaraciones
    bool salir = false;
    int opcion = -1;
    //Inicializar random
    srand(time(NULL));
    do
    {
        MenuPrincipal(opcion);
        switch(opcion)
        {
        case OPCION_MENU_1:
            break;
        case OPCION_MENU_2:
            break;
        case OPCION_MENU_3:
            break;
        case OPCION_MENU_4:
            break;
        case OPCION_MENU_5:
            break;
        case OPCION_MENU_6:
            break;
        case OPCION_MENU_7:
            break;
        case OPCION_MENU_SALIR:
            salir = true;
            break;
        default:
            printf("Opcion no implementada");
            break;
        }


    }
    while(!salir);


}

int randomNumber(int minNum,int maxNum)
{
    //int rang = maxNum - minNum + 1;
    return rand() % maxNum + minNum;
}

int getMaxNumber(int number)
{
    return ((number * number) - number) / 2;
}

void loadMtrz(Matriz &m,int connections)
{
    int i = 0;
    while(i < connections)
    {
        int randomI = randomNumber(0,N);
        int randomJ = randomNumber(0,N);
        if(m[randomI][randomJ] == 0)
        {
            m[randomI][randomJ] = 1;
            m[randomJ][randomI] = 1;

        }
        i++;
    }


}
