/*
* Name: PP_1.c
* Purpose : Tells the number of digits of a number
* Author: Faseeh Ur Rehman
*/
#include<stdio.h>

int main(void){
    int inputVal;
    printf("Enter a number: ");
    scanf("%d",&inputVal);

    printf("The number %d has ",inputVal);
    while(inputVal > 0){
        printf("%d",inputVal % 10);
        inputVal /= 10;
    }
}