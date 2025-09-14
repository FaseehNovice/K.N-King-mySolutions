/*
* Name:PP_2.c
* Purpose: Calculates GCD of the two numbers
* Author: Faseeh-Ur-Rehman
* Inputs: Two Numbers
* Outputs: GCD of the two numbers
*/

#include<stdio.h>

int main(void){
    int num1 , num2 , minNum;
    printf("Enter two integers: ");
    scanf("%d %d",&num1 , &num2);

    minNum = (num1 > num2) ?  num2 :  num1;

    for(int i = minNum ; i >= 2; i --){
        if( (num1 % i == 0) && (num2 % i == 0) ){
            printf("Greatest Common Divisor: %d", i);
            return 0;
        }
    }
    printf("No Common Divisors Found");

    return 0;
}