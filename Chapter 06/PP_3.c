/*
* Name: PP_3.c
* Purpose: Reduces a fraction to lowest terms
* Author: Faseeh-Ur-Rehman
* Inputs: fraction(num/num)
* Outputs: Simplified fraction(num/num)
*/
#include<stdio.h>

int findGCD(int num1, int num2){
    int minNum;

    minNum = (num1 > num2) ?  num2 :  num1;

    for(int i = minNum ; i >= 2; i --){
        if( (num1 % i == 0) && (num2 % i == 0) ){
            return i;
        }
    }

    return 1;
}

int main(void){
    int numer,denom , gcd;
    printf("Enter a fraction: ");
    scanf("%d/%d" , &numer , &denom);

    gcd = findGCD(numer,denom);

    printf("In lowest terms: %d/%d",numer/gcd , denom/gcd);

}