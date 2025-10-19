/*
* Name: countdown.c
* Purpose: prints a countdown
* Author: Faseeh-Ur-Rehman
* Input: none
* Output: countdown
*/
#include<stdio.h>

void countdown(int n);

int main(void){
    for(int i = 10 ; i >=0 ; i--)
        countdown(i);
}

void countdown(int n){
    printf("T minus %d and counting\n",n);
}
