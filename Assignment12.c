#include <stdio.h>
#include <stdlib.h>

int scd_calc (int num1, int num2) {
    // Calculate SCD
    int is_scd_found = 0
    int min_value = (num1 < num2) ? num1 : num2;
    int scd = 2;
    while (scd <= min_value) {
        if (num1 % scd == 0 && num2 % scd == 0) {
            is_scd_found = 1;
            break;
        }
        scd++;
    }
    if (!is_scd_found) {
        scd = 1; // If no common divisor found, SCD is 1
    }

    return scd;
}

int gcd_calc (int num1, int num2) {
    // Calculate GCD
    int is_gcd_found = 0;
    int max_value = (num1 > num2) ? num1 : num2;
    int gcd = max_value;
    while (gcd > 1) {
        if (num1 % gcd == 0 && num2 % gcd == 0) {
            is_gcd_found = 1;
            break;
        }
        gcd--;
    }
    if (!is_gcd_found) {
        gcd = 1; // If no common divisor found, GCD is 1
    }

    return gcd;
}

void main() {

    // Assignment 12
    // Program to perform mathematical operations on two numbers
    // - Smallest Common Divisor (SCD)
    // - Greatest Common Divisor (GCD)

    // Input
    int num1, num2, choice;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    num1 = mod(abs(num1));
    num2 = mod(abs(num2));

    printf("Choose Operation:\n1.Calculate SCD\n2.Calculate GCD\n3.Calculate Both SCD and GCD\n");
    scanf("%d", &choice);

    switch (choice){
        case 1:
            int scd_value = scd_calc(num1, num2);
            printf("Smallest Common Divisor of %d and %d is %d\n", num1, num2, scd_value);
            break;
        case 2:
            int gcd_value = gcd_calc(num1, num2);
            printf("Greatest Common Divisor of %d and %d is %d\n", num1, num2, gcd_value);
            break;
        case 3:
            int scd_value = scd_calc(num1, num2);
            printf("Smallest Common Divisor of %d and %d is %d\n", num1, num2, scd_value);
            int gcd_value = gcd_calc(num1, num2); 
            printf("Greatest Common Divisor of %d and %d is %d\n", num1, num2, gcd_value);
            break;
        default:
            printf("Invalid Choice\n");
    }
/*

    // Implementation using Euclidean algorithm

    // Calculate GCD using Euclidean algorithm
    for (int i = 2; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            printf("GCD of %d and %d using Euclidean algorithm is %d\n", num1, num2, i);
            break;
        }
    }
    
    // Calculate SCD using Euclidean algorithm
    scd = -1;
    for (int i = 2; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            scd = i;
            break;
        }
    }
    if (scd == -1) {
            printf("No Common Divisor Found for %d and %d\n", num1, num2);
        } else {
            printf("SCD of %d and %d using Euclidean algorithm is %d\n", num1, num2, scd);
        }
*/
    
    // LCM Calculation using GCD
    //int lcm = (num1 * num2) / gcd;
    //printf("LCM of %d and %d is %d\n", num1, num2, lcm);
}