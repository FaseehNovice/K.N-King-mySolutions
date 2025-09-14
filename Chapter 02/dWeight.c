/*
* Name: dWeight.c
* Purpose: Computes the dimensional weight of a box with user defineed dimensions
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>
#define INCHES_PER_POUND 166


int main(void){
    int length, height, width, volume, weight;
    printf("Enter height of Box: ");
    scanf("%d",&height);
    printf("Enter length of Box: ");
    scanf("%d",&length);
    printf("Enter width of Box: ");
    scanf("%d",&width);

    volume = height * length * width;

    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume(cubic inches): %d\n",volume);
    printf("Dimensional weight(pounds): %d\n",weight);

    return 0;
}