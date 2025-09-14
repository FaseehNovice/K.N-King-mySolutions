/*
* Name: PP_3.c
* Purpose: Modify PP_2.c so that the user can input radius
* Author: Faseeh-Ur-Rehman
*/
#include<stdio.h>

#define PI 3.142f
#define FACTOR 4.0f/3.0f

int main(void){
    float radius;
    printf("Enter Radius: ");
    scanf("%f",&radius);
    printf("Volume of Sphere: %.1f\n",FACTOR * PI * radius * radius * radius);
    return 0;
}