#include <stdio.h>

int main() {
    int num;

    // Using a for loop to print numbers from 1 to 10
    printf("Using a for loop:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Using a while loop to print even numbers between 1 and 20
    printf("Using a while loop:\n");
    int j = 2; // Start from the first even number
    while (j <= 20) {
        printf("%d ", j);
        j += 2; // Increment by 2 to get the next even number
    }
    printf("\n");

    // Using a do-while loop to ensure a positive number is entered
    printf("Using a do-while loop:\n");
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("You entered a positive number.\n");

    return 0;
}
