/*
* Name: prime.c
* Purpose: Tests whether a number is prime
* Author: Faseeh-Ur-Rehman
* Input: A number
* Output: Prime/Not Prime
*/
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool is_prime(int n);
bool is_prime_recursion(int n ,  int counter);

int main(void){

    int input_val;
    printf("Enter a number: ");
    scanf("%d",&input_val);

    if(is_prime(input_val)){
        printf("Is Prime\n");
    }
    else
        printf("Is Not Prime\n");

    int sqrt_Inputval = sqrt(input_val);
    if(is_prime_recursion(input_val , sqrt_Inputval)){
        printf("Is Prime\n");
        return 0;
    }
    else
        printf("Is Not Prime\n");

    return 0;
}

bool is_prime(int n){
    for(int i = 2 ; i*i <= n ; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

bool is_prime_recursion(int n , int counter){
    if( counter == 2)
        return n % counter == 0 ? false : true;
    return n % counter == 0 ? false : is_prime_recursion(n , --counter);
}