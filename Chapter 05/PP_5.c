/*
* Name: PP_5.c
* Purpose: Displays tax due for a certain taxable input
* Author: Faseeh Ur Rehman
* Input: Income
* Ouput: Tax Due
*/

#include<stdio.h>

int main(){
    float income;
    printf("Enter your income: $");
    scanf("%f",&income);

    printf("Due Tax: ");
    if(income < 750.0f){
        printf("%.2f",income * 0.01);
    }
    else if(income < 2250.0f){
        printf("%.2f",7.50f + (income * 0.02));
    }
    else if(income < 3750.0f){
        printf("%.2f",37.50f + (income * 0.03));
    }
    else if(income < 5250.0f){
        printf("%.2f",82.50f + (income * 0.04));
    }
    else if(income <= 7000.0f){
        printf("%.2f",142.50f + (income * 0.05));
    }
    else if(income > 7000.0f){
        printf("%.2f",230.00f + (income * 0.06));
    }
}