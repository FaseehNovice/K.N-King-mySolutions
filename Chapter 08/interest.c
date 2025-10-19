/*
* Name: interest.c
* Purpose: shows value of your money at oe year inteval at user's interest rate and next 4 higher rates.
* Author: Faseeh-Ur-Rehman
* Input: Interst Rate & Number of Years
* Output: Table with Value per year of user's interest rate and next 4 higher rates.
*/

#include<stdio.h>

#define TOTAL_INTERESTS 5

int main(void){
    int total_years ;
    double principle_amount[TOTAL_INTERESTS] = {100.00, 100.00, 100.00, 100.00, 100.00};
    double interest_rate[TOTAL_INTERESTS] = {0};

    printf("Enter Interest Rate: ");
    scanf("%lf",&interest_rate[0]);

    for(int i = 1 ; i < TOTAL_INTERESTS ; i++){
        interest_rate[i] = interest_rate[i-1] + 1;
    }

    printf("Enter Number of Years: ");
    scanf("%d",&total_years);

    printf("%7s","Years");
    for(int i = 0 ; i < TOTAL_INTERESTS ; i ++){
        printf("%6.0lf%% ",interest_rate[i]);
    }
    printf("\n");

    for(int i = 1 ; i <= total_years ; i++){
        printf("%5d    ",i);
        for(int j = 0 ; j < TOTAL_INTERESTS ; j++){
            principle_amount[j] += principle_amount[j] * (interest_rate[j] / 100.0);
            printf("%7.2lf " , principle_amount[j]);
        }
        printf("\n");
    }

    return 0;
}