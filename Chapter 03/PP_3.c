/*
* Name: PP_3.c
* Purpose: formats product information entered by the user
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>

int main(void){

    int item_num, mm, dd, yyyy;
    float unit_price;

    printf("Enter item number : ");
    scanf("%d", &item_num);

    printf("Enter unit price : ");
    scanf("%f", &unit_price);

    printf("Enter purchase date(mm/dd/yyy) : ");
    scanf("%d/%d/%d" , &mm, &dd, &yyyy);

    printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n%d\t$%8.2f\t%.2d/%d/%d",item_num,unit_price,mm,dd,yyyy);

    return 0;
}