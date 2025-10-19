/*
* Name: guess.c
* Purpose: Asks a user to guess a hidden number
* (Guess the number between 1 and 100)
* Auhtor: Faseeh-Ur-Rehman
*/

#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>

int guessNumber();
void playGame(int* guess);
bool checkCondition(int guess,int ans);

int main(void){
    start:
    printf("Guess the number between 1 and 100\n");
    srand((unsigned)time(NULL));
    int ans = guessNumber() , guess , count = 0;

    do
    {
        playGame(&guess);
        count++;

    } while (checkCondition(guess,ans));

    printf("You Won in %d guesses\n",count);

    printf("Play Again? (Y/N): ");
    char choice;
    scanf(" %c",&choice);
    if(choice == 'y' || choice == 'Y')
        goto start;
    else if(choice == 'n' || choice == 'N')
        return 0;

}

int guessNumber(){
    return (rand() % 100) + 1;
}

void playGame(int* guess){
    printf("Enter guess: ");
    scanf("%d",guess);
}

bool checkCondition(int guess, int ans){
    if(guess > ans){
        printf("Too High, Try again\n");
        return true;
    }
    else if (guess < ans){
        printf("Too Low, Try again\n");
        return true;
    }
    else
        return false;
}