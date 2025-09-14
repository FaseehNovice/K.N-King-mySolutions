/*
* Name: PP_11.c
* Purpose: The value of the mathematical constant e can be expressed as an infinite series:
*           e = 1 + 1/1! + 1/2! + 1/3! + ...
*           Write a program that approximates e by computing the value of
*           1+ 1/1! + 1/2! + 1/3! + ... + 1/n!
*           where n is an integer entered by the user.
* Input: n
* Output: Approximation of the mathematical constand e
*/

#include<stdio.h>

int factorial(int n){
    int facto = 1;

    for(int i = n ; i > 1 ; i--){
        facto = facto * i;
    }
    return facto;
}

int main(void){
    int input_val;
    float sum = 1.0f;
    printf("Enter a number upto which you want the approxiamtion: ");
    scanf("%d" , &input_val);

    for(int i = 1 ; i <= input_val ; i++){
        sum += ( 1.0f / factorial(i));
    }
    printf("Approximation : %f",sum);
}