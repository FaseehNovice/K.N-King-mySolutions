/*
* Name: reverse.c
* Purpose: reverses and input of 10 numbers
* Author: Faseeh-Ur-Rehman
* Input: 10 integers (i.e 1,2,3...)
* Output: reversed input integers (10,9,8 ...)
*/

#include<stdio.h>

#define N 10

int main(void){
    int a[N],i;

    printf("Enter %d numbers: ",N);
    for(i = 0 ; i < N ; i++){
        scanf("%d", &a[i]);
    }
    printf("In reverse Order: ");
    for(i = N - 1 ; i >= 0 ; i--){
        printf("%d ",a[i]);
    }

    return 0;
}