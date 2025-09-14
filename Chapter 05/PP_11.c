/*
* Name: PP_11.c
* Purpose: Asks for two digit number and prints it in English
* Author: Faseeh-Ur-Rehman
* Inputs: 2-digit Number
* Output: English for that Number
*/

#include<stdio.h>

int main(void){
    printf("Enter a two-digit number: ");
    int first_digit , second_digit;
    scanf("%1d%1d",&first_digit,&second_digit);
    int flag = 0;
    
    switch(first_digit){
        case 1: flag = 1;
                break;
        case 2: printf("twenty ");
                break;
        case 3: printf("thirty ");
                break;
        case 4: printf("fourty ");
                break;
        case 5: printf("fifty ");
                break;
        case 6: printf("sixty ");
                break;
        case 7: printf("seventy ");
                break;
        case 8: printf("eighty ");
                break;
        case 9: printf("ninety ");
                break;
    }
    if(flag == 1){
        switch (second_digit){
            case 0: break;
            case 1: printf("eleven");
                    break;
            case 2: printf("twelve");
                    break;
            case 3: printf("thirtee");
                    break;
            case 4: printf("fourteen");
                    break;
            case 5: printf("fifteen");
                    break;
            case 6: printf("sixteen");
                    break;
            case 7: printf("seventeen");
                    break;
            case 8: printf("eighteen");
                    break;
            case 9: printf("nineteen");
                    break;
        }
    }
    else{
        switch (second_digit){
            case 0: break;
            case 1: printf("one");
                    break;
            case 2: printf("two");
                    break;
            case 3: printf("three");
                    break;
            case 4: printf("four");
                    break;
            case 5: printf("five");
                    break;
            case 6: printf("six");
                    break;
            case 7: printf("seven");
                    break;
            case 8: printf("eight");
                    break;
            case 9: printf("nine");
                    break;
        }
    }
}