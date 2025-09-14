/*
* Name: square.c
* Purpose: This program prints a table of squares.
* Author: Faseeh Ur Rehman
* Input: number of rows
* Output: number of squares upto number of rows
*/
#include<stdio.h>

int main(void){
    int n;
    printf("Enter number of enteries in table: ");
    scanf("%d",&n);
    int count = 1;
    while(count <= n){
        printf("%d      %d\n",count , count*count);
        count++;
    }

    return 0;
}