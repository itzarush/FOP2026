#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Factorial Function
int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main (){

    // Assignment 10
    // Program for simple arithmetic calculator using switch case including power, factorial and exit option

    int ch;
    float num1, num2, result;

    printf("Welcome:\n");

    printf("Please enter Number 1:");
    scanf("%f", &num1);
    printf("Please enter Number 2:");
    scanf("%f", &num2);

    printf("\nPress-\n1 for add\n2 for sub\n3 for mul\n4 for div\n5 for power\n6 for factorial\n7 for exit\n");
    
    printf("Enter your choice:");
    scanf("%d", &ch);
    printf("\n");

    switch (ch) {
        case 1 : result = num1 + num2; printf("Sum of %f and %f is: %f\n", num1, num2, result); break;
        case 2 : result = num1 - num2; printf("Difference of %f and %f is: %f\n", num1, num2, result); break;
        case 3 : result = num1 * num2; printf("Multiplication of %f and %f is: %f\n", num1, num2, result); break;
        case 4 : result = num1 / num2; printf("Division of %f and %f is: %f\n", num1, num2, result); break;
        case 5 : result = pow(num1, num2); printf("%f Raised to the power %f is: %f\n", num1, num2, result); break;
        case 6 : float result1 = factorial(num1); float result2 = factorial(num2); printf("Factorial of %f is: %f\nFactorial of %f is: %f\n", num1, result1, num2, result2); break;
        case 7 : exit(0); break;
        default : break;
    }

    printf("\nThank you for using our services");

    return 0;
}