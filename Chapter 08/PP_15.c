/*
* Name: PP_15.c
* Purpose: Caesar Cipher
* Author: Faseeh-Ur-Rehman
*/
#include<stdio.h>

#define SIZE 80

int main(void){
    printf("Enter message to be encrypted: ");

    char sentences[SIZE];

    int i = 0 , shift_amount;

    while((sentences[i] = getchar()) != '\n'){
        i++;
    }

    printf("Enter shift amount: ");
    scanf("%d",&shift_amount);

    for (int j = 0; j < i; j++){

        if((sentences[j] > 'A' - 1 && sentences[j] < 'Z' + 1) || (sentences[j] > 'a' - 1 && sentences[j] < 'z' + 1)){

            if((sentences[j] > 'A' - 1 && sentences[j] < 'Z' + 1) && (sentences[j] + shift_amount > 'Z')){
                sentences[j] = ((sentences[j] - 'A') + shift_amount) % 26 + 'A';
            }

            else if((sentences[j] > 'a' - 1 && sentences[j] < 'z' + 1) && (sentences[j] + shift_amount > 'z')){
                sentences[j] = ((sentences[j] - 'a') + shift_amount) % 26 + 'a';
            }

            else
                sentences[j] += shift_amount;
        }

    }

    for (int m = 0; m < i; m++){
        printf("%c",sentences[m]);
    }


    return 0;
}