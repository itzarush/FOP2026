#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main() {

    // Assignment 09
    // Program to check if a number is a armstrong number or not (n = 3)

    int num, temp, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    }

/*
    // Program to check if a number is a armstrong number or not (General case n)
    int n, originalNum, remainder, result = 0;
    printf("Enter the number of digits (n): ");
    scanf("%d", &n);
    printf("Enter a number: ");
    scanf("%d", &originalNum);
    temp = originalNum;
    while (temp > 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }
    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }
*/