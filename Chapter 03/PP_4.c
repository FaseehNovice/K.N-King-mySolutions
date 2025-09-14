/*
* Name: PP_4.c
* Purpose: Write a program that prompts the user to enter
* a telephone number in the form (xxx) xxxxxxx
* and then displays the number in the form xxx.xxx.xxx:
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>

int main(void){
    int num, num2,num3;
    scanf("(%d) %d-%d", &num,&num2,&num3);
    printf("%d.%d.%d",num,num2,num3);
    return 0;
}