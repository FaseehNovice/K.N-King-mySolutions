/*
* Name: PP_3.c
* Purpose: a program that reads an integer entered by the user and displays it in octal
* Author: Faseeh Ur Rehman
*/

#include<stdio.h>

int main(void){
    int decNum, octNum = 0;
    printf("Enter a number between 0 and 32767: ");
    scanf("%5d",&decNum);

    octNum += (decNum % 8) * 1;
    decNum /= 8;
    octNum += (decNum % 8) * 10;
    decNum /= 8;
    octNum += (decNum % 8) * 100;
    decNum /= 8;
    octNum += (decNum % 8) * 1000;
    decNum /= 8;
    octNum += (decNum % 8) * 10000;

    printf("In octal, your number is: %05d",octNum);
}