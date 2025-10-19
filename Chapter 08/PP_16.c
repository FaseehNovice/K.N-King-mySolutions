/*
* Name: PP_16.c
* Purpose: a program that tests whether two words are anagrams
* Author: Faseeh-Ur-Rehman
*/
#include<stdio.h>
#include<ctype.h>

#define SIZE 80
#define AlPHABETS 26

int main(void){
    char word_first[SIZE];
    char word_second[SIZE];
    int alphs[AlPHABETS] = {0};
    int count_first = 0 , count_second = 0;

    printf("Enter First Word(<80 charachters): ");
    while ((word_first[count_first] = getchar()) != '\n'){
        if(isalpha(word_first[count_first])){
            word_first[count_first] = tolower(word_first[count_first]);
            alphs[word_first[count_first] - 'a' - 1]++;
            count_first++;
        }

    }

    printf("Enter Second Word(<80 charachters): ");
    while ((word_second[count_second] = getchar()) != '\n'){
        if(isalpha(word_second[count_second])){
            word_second[count_second] = tolower(word_second[count_second]);
            alphs[word_second[count_second] - 'a' - 1]--;
            count_second++;
        }

    }

    for(int i = 0; i < AlPHABETS; i++){
        if(alphs[i] != 0){
            printf("The Words are NOT anagrams\n");
            return 0;
        }
    }

    printf("The Words are anagrams\n");

    return 0;
}