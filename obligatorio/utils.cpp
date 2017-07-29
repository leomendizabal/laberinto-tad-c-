#include "utils.h"

int randomNumber(int minNum,int maxNum)
{
    //int rang = maxNum - minNum + 1;
    return rand() % maxNum + minNum;
}

int getMaxNumber(int number)
{
    return ((number * number) - number) / 2;
}


void ImprimirIndice(int n){
    printf("  |");
    for(int i = 0; i < n; i++){
       printf("%d|",i);
    }
    printf("\n");
}

int dispercion(long int ci){
    return ci%100;
}
