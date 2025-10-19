/*
* Name: PP_9.c
* Purpose:  a program that generates a "random walk" across a 10 × 10 array.
* Author: Faseeh-Ur-Rehman
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define GRID 10

#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

int main(void){

    srand((unsigned)time(NULL));

    char plane[10][10];
    for (int i = 0; i < GRID; i++) {
        for (int j = 0; j < GRID; j++) {
            plane[i][j] = '.';
        }
    }

    char alphabet = 65;
    int dir_alp , i = 0 , j = 0;

    while (alphabet != 91){
        dir_alp = rand() % 4;

        plane[i][j] = alphabet;
        if( plane[i+1][j] != '.' && plane[i-1][j] != '.' && plane[i][j+1] != '.' && plane[i][j-1] != '.')
            break;
        if(dir_alp == UP && i + 1 < GRID && plane[i+1][j] == '.'){
            i++;
        }
        else if(dir_alp == DOWN && i - 1 >= 0 && plane[i-1][j] == '.'){
            i--;
        }
        else if(dir_alp == LEFT && j - 1 >= 0 && plane[i][j-1] == '.'){
            j--;
        }
        else if(dir_alp == RIGHT && j + 1 < GRID && plane[i][j+1] == '.'){
            j++;
        }
        else
            continue;

        alphabet++;
    }

    for(int m = 0; m < GRID; m++){
        for(int n = 0; n < GRID; n++)
            printf("%c ",plane[m][n]);
        printf("\n");
    }


}