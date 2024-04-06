#include <stdio.h>

void displayBox(char ch, int width, int height) {
    int i, j;
    
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                printf("%c", ch);
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    char operator;
    float num1, num2, result;
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // Added space before %c to consume newline
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.");
                return 1;
            }
            break;
        default:
            printf("Error! Invalid operator.");
            return 1;
    }
    
    printf("\n");
    displayBox('*', 30, 5); // Displaying output in a box
    printf("Result: %.2f\n", result);
    displayBox('*', 30, 5);
    
    return 0;
}

