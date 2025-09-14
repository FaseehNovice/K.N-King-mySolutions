/*
* Name: volume.c
* Purpose: calculates Volume of a regular polygon
* Author: Faseeh-Ur-Rehman
*/
#include<stdio.h>

int main(void){
    int height = 10;
    int width = 20;
    float length = 5.6734f;

    float volume = height * width * length;
    printf("Volume: %.2f\n",volume);

    return 0;
}