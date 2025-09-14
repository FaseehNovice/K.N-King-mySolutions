/*
* Name: celsius.c
* Purpose: Converts user input of Fahrenite temperature into Celsius
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main(void){
    float fahrenite, celsius;
    printf("Enter Fahrenite Temperature: ");
    scanf("%f",&fahrenite);

    celsius = (fahrenite - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius Equivalent: %.1f",celsius);

    return 0;
}