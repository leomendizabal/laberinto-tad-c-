#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

const int N = 50;

typedef int Matriz[N][N];

int randomNumber(int minNum,int maxNum);
int getMaxNumber(int number);
void loadMtrz(Matriz &m, int connections);

int main(){
    srand(time(NULL));
    int maxNumber = getMaxNumber(N);
    printf("Numero maximo : %d \n",maxNumber);
    int generated = randomNumber(N,maxNumber);
    printf("Numero generado : %d",generated);
    printf("\n\n-------Matriz-----\n\n");

    Matriz m;
    //init
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            m[i][j]=0;
        }
    }
    loadMtrz(m,generated);
    //print
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            printf("%d",m[i][j]);
        }
        printf("\n");
    }

}


int randomNumber(int minNum,int maxNum){
    //int rang = maxNum - minNum + 1;
    return rand() % maxNum + minNum;
}

int getMaxNumber(int number){
    return ((number * number) - number) / 2;
}

void loadMtrz(Matriz &m,int connections){
    int i = 0;
    while(i < connections){
        int randomI = randomNumber(0,N);
        int randomJ = randomNumber(0,N);
        if(m[randomI][randomJ] == 0){
            m[randomI][randomJ] = 1;
            m[randomJ][randomI] = 1;

        }
        i++;
    }


}
