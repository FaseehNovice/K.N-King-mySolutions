/*
* Name: PP_7.c
* Purpose: a program that reads a 5 x 5 array of integers and then prints the row sums and the
* column sums:
* Author: Faseeh-Ur-Rehman
*/
#include<stdio.h>
#define ROW 5
#define COL 5

int main(void){
    int array[ROW][COL];

    for(int i = 0; i < ROW ; i++){
        printf("Enter row %d: ", i +1);
        scanf("%d %d %d %d %d" , &array[i][0],&array[i][1],&array[i][2],&array[i][3],&array[i][4]);
    }

    printf("Row Totals: ");
    int sum ;
    for(int i = 0; i < ROW ; i++){
        sum = 0;
        for(int j = 0; j < COL ; j++){
            sum+=array[i][j];
        }
        printf("%d ",sum);
    }

    printf("\nCol Totals: ");
    for(int i = 0; i < ROW ; i++){
        sum = 0;
        for(int j = 0; j < COL ; j++){
            sum+=array[j][i];
        }
        printf("%d ",sum);
    }


    return 0;
}