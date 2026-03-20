#include <stdio.h>
void main () {

    // Assignment 03
    // Program to print multiplication table of a given number

    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}