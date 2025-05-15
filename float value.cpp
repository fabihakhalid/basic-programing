#include <stdio.h>

int main() {
    float value1, value2, value3, value4, avg;

    printf("Enter Four Values:\n");
    scanf("%f %f %f %f", &value1, &value2, &value3, &value4);

    avg = (value1 + value2 + value3 + value4) / 4;

    printf("The Average of %.2f, %.2f, %.2f and %.2f is: %.2f\n", value1, value2, value3, value4, avg); 

    return 0;
}
