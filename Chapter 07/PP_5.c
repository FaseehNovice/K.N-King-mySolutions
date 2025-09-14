/*
* Name: PP_5.c
* Purpose: Write a program that computes the value of a word by summing the values of its letters:
* Author: Faseeh-Ur-Rehman
* Input: Word
* Output: Scrabble Value of the Input word
*/

#include<stdio.h>
#include<ctype.h>

int main(void){
    char ch;
    int sum = 0;

    printf("Enter a word: ");
    while((ch = getchar()) != '\n'){
        ch = toupper(ch);
        switch (ch)
        {
        case'A':case'E':case'I':case'L':case'N':case'O':case'R':case'S':case'T':case'U':
            sum+=1;
            break;
        case'D':case'G':
            sum+=2;
            break;
        case'B':case'C':case'M':case'P':
            sum+=3;
            break;
        case'F':case'H':case'V':case'W':case'Y':
            sum+=4;
            break;
        case'K':
            sum+=5;
            break;
        case'J':case'X':
            sum+=8;
            break;
        case'Q':case'Z':
            sum+=10;
        default:
            break;
        }
    }
    printf("Scrabble Value: %d\n",sum);
}