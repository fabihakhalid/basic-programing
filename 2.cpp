#include <stdio.h>

int main() {
    int i, j;

    printf("Nesting\n");

    // Outer loop (1st number)
    for (i = 1; i <= 5; i++) {
        printf("%d-1\n", i);  // Print the first entry for each i

        // Inner loop (2nd number, starts from 1)
        for (j = 1; j <= 5; j++) {
            printf("2-%d\n", j);
        }
    }

    return 0;
}
