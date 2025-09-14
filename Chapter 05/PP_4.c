/*
* Name: PP_4.c
* Purpose: Beaufort Implementation
* Author: Faseeh Ur Rehman
* Input: Wind Speed in knots
* Output: Corresponding Description per Beaufort Scale
* Date: 9/9/25
*/

#include<stdio.h>

int main(void){
    printf("Enter Speed in knots: ");
    int speed;
    scanf("%d",&speed);
    if(speed < 1)
        printf("Calm");
    else if(speed <= 3)
        printf("Light Air");
    else if(speed <= 27)
        printf("Breeze");
    else if(speed <= 47)
        printf("Gale");
    else if(speed <= 63)
        printf("Storm");
    else if(speed > 63)
        printf("Hurricane");
}