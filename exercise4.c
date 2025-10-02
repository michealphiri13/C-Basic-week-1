#include <stdio.h>

// Function declaration
float calculateAverage(float a, float b, float c);

int main() {
    float num1, num2, num3, avg;

    // Input: ask user for three numbers
    printf("Enter three numbers separated by spaces: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Call the function to calculate average
    avg = calculateAverage(num1, num2, num3);

    // Output result
    printf("The average of %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, avg);

    return 0;
}

// Function definition
float calculateAverage(float a, float b, float c) {
    return (a + b + c) / 3.0;
}
