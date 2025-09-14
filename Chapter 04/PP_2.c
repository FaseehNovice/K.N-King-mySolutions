/*
* Name: PP_2.c
* Purpose: Extend the program in Programming Project I to handle three-digit numbers.
* Author: Faseeh Ur Rehman
*/

#include<stdio.h>

int main(void){
    int num;
    printf("Enter 3 digit number: ");
    scanf("%3d",&num);

    printf("%d%d%d" , num%10 , (num/10)%10 , ((num/10)/10)%10);
}