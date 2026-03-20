#include <stdio.h>
void main() {

    // Assignment 13
    // Program to reverse a number

    int num, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number: %d\n", reversed);
}