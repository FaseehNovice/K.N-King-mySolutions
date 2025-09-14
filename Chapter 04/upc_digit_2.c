/*
* Name
* Purpose:Rewrite the upc_digit.c program so that the user enters 11 digits at one time,
* instead of entering one digit, then five digits, and then another five digits.
* Author: Faseeh Ur Rehman
*/

#include<stdio.h>

int main(void){
    int d , i1 , i2 , i3 , i4 , i5 , j1 , j2 , j3 , j4 , j5 , first_sum , second_sum , total;
    printf("Enter 11 digits : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1 , &i2 , &i3 , &i4 , &i5, &j1 , &j2 , &j3 , &j4 , &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + j5 + j2 + j4;

    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;

}