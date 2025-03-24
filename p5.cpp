#include <stdio.h>

int main() {
    int num1, num2;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    
    if (num1 > num2) {
        printf("First number is greater.\n");
    } else {
        printf("Second number is greater or equal.\n");
    }

    return 0;
}
