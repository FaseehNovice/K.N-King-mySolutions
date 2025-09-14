/*
* Name: PP_8.c
* Purpose: Prints a one-month calendar
* Author: Faseeh-Ur-Rehman
* Input: Number of Days in month , Starting day of the week
* Output: Calendar for that month
*/

#include<stdio.h>

int main(void){
    int daysIn_Month, startday;
    printf("Enter Number of days in month: ");
    scanf("%d",&daysIn_Month);

    printf("Enter Starting day of the week (1 = Sun , 7 = Sat): ");
    scanf("%d",&startday);

    int count_DayOfWeek = startday;

    printf(" S  M  T  W TH  F SA\n");
    for(int i = 1; i <= daysIn_Month;i++){

        if(i == 1){
            for(int j = 1 ; j <= count_DayOfWeek ; j++){
                printf("   ");
            }
        }

        if(count_DayOfWeek == 7 ){
            printf("\n");
            count_DayOfWeek = 0;
        }

        printf("%2d ",i);
        count_DayOfWeek++;
    }

    return 0;
}