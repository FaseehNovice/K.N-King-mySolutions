/*
* Name: PP_2.c
* Purpose: Converts 24h time to 12h time
* Author: Faseeh Ur Rehman
* Input: 24h time
* Output: 12h time
* Date: 9/9/25
*/

#include<stdio.h>

int main(void){
    printf("Enter a 24-hour time: ");
    int time24hour , time24minute ;
    char  meridiem[3] = {'A','M','\0'};
    scanf("%d:%d" , &time24hour , &time24minute);

    if(time24hour > 24 || time24minute > 60 || time24hour < 0 || time24minute < 0){
        printf("INVALID INPUT!");
        return 1;
    }
    else if(time24hour > 12){
        time24hour -= 12;
        meridiem[0] = 'P';
    }
    else if(time24hour == 0){
        time24hour = 12;
    }
    else if(time24hour == 12 ){
        meridiem[0] = 'P';
    }
    printf("Equivalent 12-hour time: %02d:%02d %s",time24hour , time24minute , meridiem);
    return 0;
}