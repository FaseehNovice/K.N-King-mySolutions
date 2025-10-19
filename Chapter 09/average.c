/*
* Name: average.c
* Purpose: a program to compute average using function
* Author: Faseeh-Ur-Rehman
* Input: two double
* Output: avg
*/
#include<stdio.h>

double average(double a , double b);

int main(void){

    double x = 3.5, y=9.6, z = 10.2;
    printf("Average of %.1lf & %.1lf is: %.2lf\n", x, y, average(x,y));
    printf("Average of %.1lf & %.1lf is: %.2lf\n", x, z, average(x,z));
    printf("Average of %.1lf & %.1lf is: %.2lf\n", y, z, average(y,z));

}

double average(double a , double b){

    return ( a + b) / 2.0;
}