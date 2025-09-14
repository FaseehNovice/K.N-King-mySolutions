/*
* Name: PP_1.c
* Purpose: reverses a two digit number
* Author: Faseeh Ur Rehman
*/

#include<stdio.h>

int main(void){
    int num;
    printf("Enter 2 digit number: ");
    scanf("%2d",&num);

    printf("%d%d" , num%10 , (num/10)%10 );
}