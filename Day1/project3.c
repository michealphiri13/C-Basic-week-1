#include <stdio.h>

int main() {
    int num1, num2;
    
    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Performing arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    if (num2 != 0) {
        int quotient = num1 / num2;
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", difference);
        printf("Product = %d\n", product);
        printf("Quotient = %d\n", quotient);
    } else {
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", difference);
        printf("Product = %d\n", product);
        printf("Quotient = Undefined (division by zero not allowed)\n");
    }

    return 0;
}
