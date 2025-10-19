/*
* Name: repDigit.c
* Purpose: checks if any of the digits in the program appear more than once
* Author: Faseeh-Ur-Rehman
* Input: Integer
* Output: Repeated digit | No Repeated digit
*/

#include<stdio.h>
#include<stdbool.h>

int main(int argc, char** argv){

    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter Your Digit: ");
    scanf("%ld",&n);

    for(;;){
        if(n == 0)  break;
        digit = n % 10;
        if(digit_seen[digit]){ //digit_seen[digit] == true
            printf("Repeated Digit");
            return 0;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("No Repeated Digit");

    return 0;
}