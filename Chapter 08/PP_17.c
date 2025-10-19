/*
* Name: PP_17.c
* Purpose: a program that prints n x n magic square
*
*/
#include<stdio.h>

int main(void){
    printf("This program creates a magic square of a specified size\nThis size must be an odd num b/w 1 and 99\n");
    printf("Enter size of magic square: ");
    int size_square;
    scanf("%d",&size_square);

    int magic_square[size_square][size_square];

    for(int m = 0 ; m < size_square ; m++){
        for(int n = 0 ; n < size_square ; n++){
            magic_square[m][n] = 0;
        }
    }

    int i = 0, prev_i, j = (size_square/2), prev_j , count = 1;
    while (count <= size_square*size_square){

        if(magic_square[i][j] != 0){
            i = prev_i;
            j = prev_j;

            i++;
            if(i == size_square)
                i = 0;

        }

        magic_square[i][j] = count;
        count++;

        prev_i = i;
        prev_j = j;

        i--;
        if(i  < 0 )
            i = size_square - 1;

        j++;
        if(j  == size_square)
            j = 0;
    }

    for(int m = 0 ; m < size_square ; m++){
        for(int n = 0 ; n < size_square ; n++){
            printf("%2d  ",magic_square[m][n]);
        }
        printf("\n");
    }

    return 0;
}