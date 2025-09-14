/*
* Name: BoxWeight.c
* Purpose: Computes the dimensional weight of a 10" 12" 8" box
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>

int main(void){
    int height = 12;
    int weight = 10;
    int length = 8;
    int volume = height * weight * length;

    // To round the value UP rathar than down
    volume += 165;

    //166 is the allowable number of cubic inches per pound
    weight = volume/166;

    //To print the original Volume
    volume -= 165;

    printf("Dimensions: %dx%dx%d\n",height,weight,length);
    printf("Volume(cubic inches): %d\n",volume);
    printf("Dimensional weight(pounds): %d\n",weight);

    return 0;
}