/*
* Name:PP_1.c
* Purpose: Finds the largest in a series of numbers entered by user.
* Author: Faseeh-Ur-Rehman
* Inputs: Numbers entered by user
* Outputs: Largest of the numbers entered by user
*/

#include<stdio.h>

int main(void){
    float input_value , max_num = 0;
    do{
        printf("Enter a number: ");
        scanf("%f",&input_value);

        if(input_value > max_num){
            max_num = input_value;
        }
    }while(input_value > 0);

    if(max_num > 0)
        printf("The largest number entered was %.2f\n",max_num);
    else
        printf("Your entered number is less than 1");
}