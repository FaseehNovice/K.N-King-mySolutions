/*
* Name: PP_11.c
* Purpose: takes a first name and last name entered by the user and displays the
* last name, a comma, and the first initial, followed by a period:
* Author: Faseeh-Ur-Rehman
* Input: Full Name
* Output: Last Name, Initial.
*/
#include<stdio.h>

int main(void){
    char ch,initial;
    int count = 0;

    while ((ch = getchar()) != ' ')
    {
        if(count == 0){
            initial = ch;
        }

        count++;
    }

    while ((ch = getchar()) != '\n')
    {
        putchar(ch);
    }
    printf(", %c.",initial);
    return 0;
}