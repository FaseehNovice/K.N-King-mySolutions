/*
* Name: PP_3.c
* Purpose: Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
* number without using arithmetic to split the number into digits.
* Author: Faseeh Ur Rehman
*/

#include<stdio.h>

int main(void){

    int num1, num2, num3;
    printf("Enter 3 digit number: ");
    scanf("%1d%1d%1d",&num1, &num2, &num3);

    printf("%1d%1d%1d",num3, num2, num1);

}