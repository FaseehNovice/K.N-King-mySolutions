/*
* Name: PP_4.c
* Purpose:  Write a program that asks the user to enter a dollars-and-cents amount,
* then displays the amount with 5% tax added
* Author: Faseeh-Ur-Rehman
*/
#include<stdio.h>

#define TAX 5.0f/100.0f

int main(void){
    float amount;
    printf("Enter Pre Tax Ammount: ");
    scanf("%f",&amount);

    printf("Post Tax Ammount: %.2f\n", (amount * TAX) + amount);

    return 0;
}