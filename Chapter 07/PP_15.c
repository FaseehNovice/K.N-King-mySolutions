/*
* Name: PP_15.c
* Purpose: Finds Factorial of a Number
* Author: Faseeh-Ur-Rehman
* Input: A Positive Number
* Output: Factorial of Input Number
*/
#include<stdio.h>

long int factorial(long int num){
    if(num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num-1);
}

int main(void){

    long int input_value , facto_Num;

    printf("Enter Your Number: ");
    scanf("%ld",&input_value);

    facto_Num = factorial(input_value);

    printf("Factorial is: %ld",facto_Num);

    return 0;

}