/*
* Name: PP_6.c
* Purpose: a "BIFF Filter" that reads a message entered
* by the user and translates it into BIFF-speak
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>
#define SIZE 100
#include<ctype.h>

int main(void){
    char msg[SIZE];
    char value_letterrs[] = {'4' , '8' , '3', '1', '0', '5'};
    int i = 0 , count;
    printf("Enter your msg(max 90 char): ");
    while((msg[i] = getchar()) != '\n' && i < 90){
        i++;
    }
    msg[i] = '!';
    count = i;
    for(i ; i >= 0 ; i--){
        msg[i] = toupper(msg[i]);
    }

    while(i <= count){
        switch (msg[i])
        {
        case 'A': msg[i] = value_letterrs[0]; break;
        case 'B': msg[i] = value_letterrs[1]; break;
        case 'E': msg[i] = value_letterrs[2]; break;
        case 'I': msg[i] = value_letterrs[3]; break;
        case 'O': msg[i] = value_letterrs[4]; break;
        case 'S': msg[i] = value_letterrs[5]; break;
        default:
            break;
        }
        i++;
    }
    for(i; i < count + 10 ; i++){
        msg[i] = '!';
    }

    printf("%s",msg);
    return 0;

}