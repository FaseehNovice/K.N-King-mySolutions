/*
* Name: lenght.c
* Purpose: Determine the length of a message
* Author: Faseeh-Ur-Rehman
* Input: Message
* Output: Length of the message
*/

#include<stdio.h>

int main(void){
    char ch;
    int count = 0;
    printf("Enter Your Message: ");
    while(ch != '\n'){
        count++;
        ch = getchar();
    }

    // "/n" also contributes to count
    printf("Your message was %d character(s) long.", count - 1);
    return 0;
}