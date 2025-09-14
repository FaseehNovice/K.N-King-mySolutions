/*
* Name: PP_8.c
* Purpose: Write a program that calculates the remaining balance on a loan after the first, second, and
* third monthly payments
* Display each balance with two digits after the decimal point.
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>

int main(void){
    float loan,interest,monthlyPayment;

    printf("Enter Loan amount : ");
    scanf("%f",&loan);
    printf("Enter Interest rate : ");
    scanf("%f",&interest);
    printf("Enter Monthly Payments : ");
    scanf("%f",&monthlyPayment);

    interest = interest / 1200.00f;

    loan += (loan * interest);
    loan -= monthlyPayment;
    printf("Balance remaining after first payment : %.2f\n", loan);

    loan += (loan * interest);
    loan -= monthlyPayment;
    printf("Balance remaining after second payment : %.2f\n", loan);

    loan += (loan * interest);
    loan -= monthlyPayment;
    printf("Balance remaining after third payment : %.2f\n", loan);

    return 0;
}