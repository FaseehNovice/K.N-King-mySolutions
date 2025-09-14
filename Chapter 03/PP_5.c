/*
* Name: PP_5.c
* Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
* displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
* and diagonals
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>

int main(void){
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,num16;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d"
        ,&num1,&num2,&num3,&num4,
        &num5,&num6,&num7,&num8,
        &num9,&num10,&num11,&num12,
        &num13,&num14,&num15,&num16);

    printf("%2d %2d %2d %2d \n",num1,num2,num3,num4);
    printf("%2d %2d %2d %2d \n",num5,num6,num7,num8);
    printf("%2d %2d %2d %2d \n",num9,num10,num11,num12);
    printf("%2d %2d %2d %2d \n",num13,num14,num15,num16);
    return 0;
}