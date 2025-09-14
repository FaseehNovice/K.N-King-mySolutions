/*
* Name: PP_9.c
* Purpose: Displays date which comes earlier of the two dates
* Author: Faseeh Ur Rehman
* Input: 2 dates
* Ouput: larger of the two dates
*/

#include<stdio.h>

int main(){
    int mm1, dd1 , yy1 , mm2, dd2 , yy2;
    printf("Enter First Date(mm/dd/yy) : ");
    scanf("%d/%d/%2d", &mm1, &dd1 , &yy1);

    printf("Enter Second Date(mm/dd/yy) : ");
    scanf("%d/%d/%2d", &mm2, &dd2 , &yy2);

    if(yy1 > yy2){
        printf("%02d/%02d/%02d is later than %02d/%02d/%02d" , mm1, dd1 , yy1 , mm2, dd2 , yy2 );
    }
    else if( yy2 > yy1)
        printf("%02d/%02d/%02d is later than %02d/%02d/%02d" , mm2, dd2 , yy2 , mm1, dd1 , yy1 );
    else{
        if(mm1 > mm2)
            printf("%02d/%02d/%02d is later than %02d/%02d/%02d" , mm1, dd1 , yy1 , mm2, dd2 , yy2 );
        else if(mm2 > mm1)
            printf("%02d/%02d/%02d is later than %02d/%02d/%02d" , mm2, dd2 , yy2 , mm1, dd1 , yy1 );
        else{
            if(dd1 > dd2)
                printf("%02d/%02d/%02d is later than %02d/%02d/%02d" , mm1, dd1 , yy1 , mm2, dd2 , yy2 );
            else if(dd2  > dd1)
                printf("%02d/%02d/%02d is later than %02d/%02d/%02d" , mm2, dd2 , yy2 , mm1, dd1 , yy1 );
        }
    }
    return 0;
}