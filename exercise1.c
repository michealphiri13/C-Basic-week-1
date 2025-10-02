#include <stdio.h>

// Function declaration
void checkOddEven(int num);

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call function
    checkOddEven(number);

    return 0;
}

// Function definition
void checkOddEven(int num) {
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }
}
