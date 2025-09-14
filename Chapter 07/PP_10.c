/*
* Name: PP_10.c
* Purpose: Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence
* Author: Faseeh-Ur-Rehman
* Input: Sentence
* Output: Number of Vowels
*/
#include<stdio.h>

int main(void){
    char ch;
    int count = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                count++;
                break;

            default:
                break;
        }
    }
    printf("Your Sentence contain %d vowel(s)",count);
}