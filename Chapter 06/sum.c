/*
* Name: sum.c
* Purpose: This program sums a series of integers.
* Author: Faseeh Ur Rehman
* Input: series of integers (0 to terminate entring)
* Output: sum of integers
*/
#include<stdio.h>

int main(void){
    int sum = 0,input_var = 0;
    printf("Enter Integers (0 to terminate)");
    scanf("%d",&input_var);
    while(input_var != 0){
        sum+=input_var;
        scanf("%d",&input_var);
    }
    printf("The Sum is %d\n",sum);
    return 0;
}