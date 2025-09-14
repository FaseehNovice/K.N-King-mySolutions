/*
* Name: PP_6.c
* Purpose: Prints all even squares in b/w 1 and user input number
* Author: Faseeh-Ur-Rehman
* Inputs: Number n
* Outputs: All squares b/w 1 and n
*/
#include<stdio.h>

int main(void){
    int n;
    printf("Enter Your Number: ");
    scanf("%d",&n);

    for(int i = 2; (i * i) <= n ; i++){
        if(i%2 != 0)
            continue;
        printf("%i\n",i*i);
    }

    return 0;
}