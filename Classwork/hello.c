#include <stdio.h>
void main () {
    int array1[5];
    for (int i = 0; i <= 2; i++) {
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i <= 2; i++) {
        printf("%d\n", array1[i]);
    }
}