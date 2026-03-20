#include <stdio.h>

void main () {

    // Assignment 02
    // Program to implement basic menu driven arithmetic calculator

    int choice;
    float num1, num2, result;

    printf("Select an operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");    
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1: printf("Result: %.2f\n", num1 + num2); break;
        case 2: printf("Result: %.2f\n", num1 - num2); break;
        case 3: printf("Result: %.2f\n", num1 * num2); break;
        case 4:
            if(num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default: printf("Invalid choice. Please select a valid operation.\n");
    }

}