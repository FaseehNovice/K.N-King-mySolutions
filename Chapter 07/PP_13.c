/*
* Name: PP_13.c
* Purpose: Calculates the average word length for a sentence
* Author: Faseeh-Ur-Rehman
* Input: Sentence
* Output: Average Word size
*/

#include<stdio.h>

int main(void){
    char ch;
    int  sum_ch = 0, total_words = 0;
    printf("Enter a Sentence: ");
    while ((ch = getchar()) != '\n')
    {
        if(ch == ' '){
            total_words++;
            continue;
        }
        sum_ch++;
    }
    printf("Average word lenght: %.1f",(float)(sum_ch)/(total_words + 1));

}