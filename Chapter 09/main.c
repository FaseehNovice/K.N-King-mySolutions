/*
* Name: main.c
* Purpose: implementing header file concepts
* Author: Faseeh-Ur-Rehman
* Input: none
* Output: Sorted Array
*/

#include<stdio.h>
#include"sort.h"

#define SIZE 7

int main(int argc, char **argv){
    int unsorted_array[SIZE] = {3,5,6,7,8,1,9};

    quicksort(unsorted_array , 0 , SIZE-1);

    printf("Sorted Array: { ");
    for(int i = 0 ; i < SIZE ; i++){
        printf("%d ",unsorted_array[i]);
    }
    printf("}");
}