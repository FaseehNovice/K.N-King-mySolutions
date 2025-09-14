/*
* Name: PP_6.c
* Purpose: Prints sizes of differrent data types
* Author: Fasee-Ur-Rehman
* Input: None
* Output: Sizes of Data Types
*/

#include<stdio.h>

int main(void){
    int i;
    short s;
    long l;
    float f;
    double d;
    long double ld;

    printf("Size of Int: %zu\n",sizeof(i));
    printf("Size of Short: %zu\n",sizeof(s));
    printf("Size of Long: %zu\n",sizeof(l));
    printf("Size of Float: %zu\n",sizeof(f));
    printf("Size of Double: %zu\n",sizeof(d));
    printf("Size of Long Double: %zu\n",sizeof(ld));
}