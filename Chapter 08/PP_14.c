/*
* Name: PP_14.c
* Purpose: a program that reverses the words in a sentence
* Author: Faseeh-Ur-Rehman
*/
#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(void) {
    char words[SIZE];
    char c;
    int i = 0;

    printf("Enter your sentence (<100 characters): ");

    while ((c = getchar()) != '.' && c != '!' && c != '?' && i < SIZE - 1) {
        words[i++] = c;
    }
    words[i] = '\0';
    char last_input = c;

    int end = i - 1;
    for (int j = i - 1; j >= 0; j--) {
        if (words[j] == ' ' || j == 0) {
            int start = (j == 0) ? 0 : j + 1;
            for (int k = start; k <= end; k++) {
                putchar(words[k]);
            }
            if (j > 0) putchar(' ');
            end = j - 1;
        }
    }

    printf("%c\n", last_input);

    return 0;
}
