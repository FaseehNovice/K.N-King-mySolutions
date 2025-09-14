/*
* Name: PP_2.c
* Purpose: Write a program that computes the volume of a sphere with a 10-meter radius
* , using the formula v= 4/3tr. Write the fraction 4/3 as 4. 0f/3.0f.
* Author: Faseeh-Ur-Rehman
*/
#include<stdio.h>

#define PI 3.142f
#define FACTOR 4.0f/3.0f

int main(void){
    float radius = 10.0f;
    printf("Volume of Sphere: %.1f\n",FACTOR * PI * radius * radius * radius);
    return 0;
}