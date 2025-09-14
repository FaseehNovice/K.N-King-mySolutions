/*
* Name: PP_7.c
* Purpose: Write a program that asks the user to enter a U.S dollar amount
* and then shows how to pay that amount
* using the smallest number of $20, $10, $5, and $1 bills:
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>

int main(void){

    int amount;
    printf("Enter Amount in $ : ");
    scanf("%d",&amount);

    printf("$20 Bills: %d\n",amount / 20);
    amount -= ((amount / 20)*20);
    printf("$10 Bills: %d\n",amount / 10);
    amount -= ((amount / 10)*10);
    printf("$5 Bills: %d\n",amount / 5);
    amount -= ((amount / 5)*5);
    printf("$1 Bills: %d\n",amount);

    return 0;
}