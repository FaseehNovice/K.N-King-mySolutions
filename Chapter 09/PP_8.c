/*
* Name: PP_8.c
* Purpose: a program that simulates game of craps
* Author: Faseeh-Ur-Rehman
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int roll_dice(void);
bool play_game(void);

int main(void){

    srand((unsigned)time(NULL));

    char choice;
    int wins = 0, losses = 0;
    bool flag;
    while(true){

        flag = play_game();
        if(flag){
            printf("You win!\n");
            wins++;
        }
        else{
            printf("You Lose!\n");
            losses++;
        }

        printf("Play Again (N/n to exit)? ");

        scanf(" %c", &choice);

        if(choice == 'n' || choice == 'N')
            break;

    }
    printf("Wins: %d Losses: %d",wins,losses);

    return 0;
}

int roll_dice(void){
    return ((rand() % 6) + 1) + ((rand() % 6) + 1);
}

bool play_game(void){

    int point , count = 1 , sum;

    while(true){
        sum = roll_dice();
        printf("You rolled: %d\n",sum);
        if(count == 1 ){
            if(sum == 7 || sum == 11)
                return true;
            else if(sum == 2 || sum == 3 || sum == 12)
                return false;
            else
                point = sum;
        }

        if(count > 1 && sum == point)
            return true;
        else if( sum == 7)
            return false;
        count++;
    }

}
