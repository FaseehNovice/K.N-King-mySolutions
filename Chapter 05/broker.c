/*
* Name: broker.c
* Purpose: Calculates a brokers commission
* Author: Faseeh Ur Rehman
*/
#include<stdio.h>

int main(){
    float commission, trade_val;
    printf("Enter value of trade: ");
    scanf("%f", &trade_val);

    if(trade_val < 2500.00f)
        commission = (trade_val * (1.7f/100.00f)) + 30.00f;
    else if(trade_val < 6250.00f)
        commission = (trade_val * (0.66f/100.00f)) + 56.00f;
    else if(trade_val < 20000.00f)
        commission = (trade_val * (0.34f/100.00f)) + 76.00f;
    else if(trade_val < 50000.00f)
        commission = (trade_val * (0.22f/100.00f)) + 100.00f;
    else if(trade_val < 500000.00f)
        commission = (trade_val * (0.11f/100.00f)) + 155.00f;
    else
        commission = (trade_val * (0.09f/100.00f)) + 255.00f;

    printf("Commission : $%.2f" , commission);
}