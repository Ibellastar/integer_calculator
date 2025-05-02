#include <stdio.h>
#include "calculator.h"

int main() {
    int num1, num2;
    char op;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    switch (op) {
        case '+': printf("Result: %d\n", add(num1, num2)); break;
        case '-': printf("Result: %d\n", subtract(num1, num2)); break;
        case '*': printf("Result: %d\n", multiply(num1, num2)); break;
        case '/': 
            if (num2 != 0)
                printf("Result: %d\n", divide(num1, num2));
            else
                printf("Error: Division by zero.\n");
            break;
        default: printf("Invalid operator.\n");
    }

    return 0;
}
