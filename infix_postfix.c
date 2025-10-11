#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  // for isalpha(), isdigit()

#define MAX 100

char stack[MAX];
int top = -1;

// Function to push an element into stack
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = c;
}

// Function to pop an element from stack
char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

// Function to get precedence of operators
int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

// Function to check if character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to convert infix to postfix
void infixToPostfix(char infix[]) {
    char postfix[MAX];
    int j = 0;

    for (int i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];

        // If the character is an operand (A-Z, a-z, 0-9), add to output
        if (isalnum(c)) {
            postfix[j++] = c;
        }
        // If '(' push to stack
        else if (c == '(') {
            push(c);
        }
        // If ')' pop until '(' is found
        else if (c == ')') {
            while (top != -1 && stack[top] != '(')
                postfix[j++] = pop();
            pop(); // remove '(' from stack
        }
        // If operator, pop operators with higher or equal precedence
        else if (isOperator(c)) {
            while (top != -1 && precedence(stack[top]) >= precedence(c))
                postfix[j++] = pop();
            push(c);
        }
    }

    // Pop remaining operators
    while (top != -1)
        postfix[j++] = pop();

    postfix[j] = '\0';
    printf("Postfix Expression: %s\n", postfix);
}

// Main function
int main() {
    char infix[MAX];
    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    infixToPostfix(infix);
    return 0;
}
