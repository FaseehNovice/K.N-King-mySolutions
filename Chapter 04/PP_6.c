/*
* Name: PP_6.c
* Purpose: European countries use a 13-digit code, known as a European Article Number (EAN)
* instead of the 12-digit Universal Product Code (UPC) found in North America.
* Author: Faseeh ur Rehman
*/

#include<stdio.h>

int main(void){
    int d , i1 , i2 , i3 , i4 , i5 , j1 , j2 , j3 , j4 , j5 , j6, first_sum , second_sum , total;
    printf("Enter 11 digits : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1 , &i2 , &i3 , &i4 , &i5, &j1 , &j2 , &j3 , &j4 , &j5 , &j6);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + j5 + j2 + j4 + j6;

    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;

}