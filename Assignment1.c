#include <stdio.h>

void main() {

    // Assignemnt 01
    // Program to check whether a given year is a leap year or not
    // A year is a leap year if it is divisible by 4 but not divisible by 100,
    // unless it is also divisible by 400.

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
        
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

}