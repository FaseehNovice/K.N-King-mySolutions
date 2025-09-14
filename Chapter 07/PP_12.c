/*
* Name: PP_12.c
* Purpose: Evaluates an arithmetic expression left-to-right
*          (operands are floating-point numbers, operators are + - * /).
* Author: Faseeh-Ur-Rehman
* Input: Expression (e.g., 1+2.5*3)
* Output: Value of that expression
*/

#include <stdio.h>

int main(void) {
    double result, num;
    char op;

    printf("Enter an expression: ");

    scanf("%lf", &result);

    while (scanf(" %c", &op) == 1) {
        if (op == '\n') break;

        if (scanf("%lf", &num) != 1) break;

        switch (op) {
            case '+': result = result + num; break;
            case '-': result = result - num; break;
            case '*': result = result * num; break;
            case '/': result = result / num; break;
            default:  printf("Invalid operator!\n"); return 1;
        }
    }

    printf("Value of expression: %.6g\n", result);
    return 0;
}