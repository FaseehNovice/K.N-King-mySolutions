/*
* Name: PP_6.c
* Purpose: Reverse Polish Notation
* Author: Faseeh-Ur-Rehman
*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100

// external variables
int contents[STACK_SIZE];
int top = 0;

void stack_overflow(void) {
    printf("Expression is too complex\n");
}

void stack_underflow(void) {
    printf("Not enough operands in expression\n");
}

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(int i) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void) {
    if (is_empty()) {
        stack_underflow();
        return 0;
    }
    else
        return contents[--top];
}

int main(void) {
    int input;
    int op1, op2;

    printf("Enter an RPN expression (end with =): ");

    while ((input = getchar()) != EOF) {
        if (isdigit(input)) {
            push(input - '0'); // convert char -> int
        }
        else if (input == '+') {
            push(pop() + pop());
        }
        else if (input == '-') {
            op2 = pop();
            op1 = pop();
            push(op1 - op2);
        }
        else if (input == '*') {
            push(pop() * pop());
        }
        else if (input == '/') {
            op2 = pop();
            op1 = pop();
            push(op1 / op2);
        }
        else if (input == '=') {
            printf("Result: %d\n", pop());
            break;
        }

    }

    return 0;
}
