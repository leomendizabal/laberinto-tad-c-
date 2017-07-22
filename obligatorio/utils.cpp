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
