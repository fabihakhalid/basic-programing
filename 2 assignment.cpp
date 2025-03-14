#include <stdio.h>

int main() {
    int i, j;

    printf("Stacking\n");

    // Outer loop (first number)
    for (i = 1; i <= 2; i++) {
        // Inner loop (second number)
        for (j = 1; j <= 5; j++) {
            printf("%d-%d\n", i, j);
        }
    }

    return 0;
}
