/*
* Name: PP_6.c
* Purpose:  Modify the program of Programming Project 5
* so that the polynomial is evaluated using the following formula:
* ((((3x +2)х-5)х 1)x+7)x-6
* Note that the modified program performs fewer multiplications.
* This technique for evaluating polynomials is known as Horner's Rule.
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>

int main(void){

    int x;
    printf("Enter Value of x : ");
    scanf("%d",&x);

    printf("f(%d) = %d\n" , x , x*( x*( x*( x*( 3*x + 2 ) - 5) - 1) + 7) - 6);

    return 0;
}