#include <stdio.h>

int main() {
    char operator;
    double num1, num2, num3, result;

    // Prompt the user to enter the operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Prompt the user to enter two numbers
    printf("Enter three numbers: ");
    scanf("%lf %lf %f", &num1, &num2, &num3);

    // Perform the calculation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2 + num3;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2 * num3;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}

