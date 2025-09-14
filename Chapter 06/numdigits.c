/*
* Name: sum.c
* Purpose: Calculates number of digits in an integer.
* Author: Faseeh Ur Rehman
* Input: integer
* Output: no. of digits
*/
#include<stdio.h>

int main(void){
    int input_val,count_digits = 0;
    printf("Enter a non-negative number: ");
    scanf("%d",&input_val);

    if(input_val >= 0){
        do
        {
            input_val /= 10;
            count_digits++;
        } while (input_val > 0);
    }
    else if(input_val < 0)
        printf("Invalid Input Detected\n");

    printf("The number has %d digit (s).\n", count_digits);

    return 0;
}