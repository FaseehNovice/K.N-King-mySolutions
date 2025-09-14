/*
* Name: PP_1.c
* Purpose: Write a program that accepts a date from the user in the form mm/dd/yyyy
* and then displays it in the form yyyymmdd:
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>

int main(void){
    int mm,dd,yyyy;

    printf("Enter date (mm/dd/yyy) : ");
    scanf("%d/%d/%d" , &mm, &dd, &yyyy);

    printf("mm/dd/yyyy to yyyymmdd : %d%.2d%d", yyyy, mm, dd);

    return 0;
}