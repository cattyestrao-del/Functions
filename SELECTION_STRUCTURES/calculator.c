#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Note the space before %c to clear any lingering newline character from the input buffer
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
            
        case '-':
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
            
        case '/':
            // Guard against division by zero
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            }
            break;
            
        default:
            printf("Error: Invalid operator '%c'. Please use +, -, *, or /.\n", operator);
    }

    return 0;
}