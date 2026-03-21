#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        remainder = binary % 10;     // get last digit

        if (remainder != 0 && remainder != 1) {
            printf("Invalid binary number!\n");
            return 0;
        }

        decimal += remainder * base; // convert to decimal
        base *= 2;
        binary /= 10;                // remove last digit
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
