/*
* Name: PP_6.c
* Purpose: computes the value of 3x5 + 2x4 - 5x3 - x2 + 7x - 6
* Author: Faseeh-Ur-Rehman
*/
#include<stdio.h>
#include<math.h>
int compute(int x);

int main(void){
    printf("result of computation is: %d",compute(1));
}

int compute(int x){
    return (3 * pow(x,5)) + (2 * pow(x,4)) - (5 * pow(x,3)) - pow(x,2) + (7*x) - 6;
}