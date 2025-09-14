/*
* Name: PP_14.c
* Purpose: uses Newton's method to compute the square root of a positive floating-point number:
* Author: Faseeh-Ur-Rehman
* Input: Number x
* Output: Square Root od That Number
*/
#include<stdio.h>
#include<math.h>

int main(void){
    double x, y = 1 , avg , prev_y;
    printf("Enter a positive number: ");
    scanf("%lf",&x);

    do
    {
        avg = (y +(x/y)) / 2 ;
        prev_y = y;
        y = avg;
    } while (fabs(prev_y - y) > 0.00001 * y);

    printf("Square Root: %lf",y);
    return 0;
}