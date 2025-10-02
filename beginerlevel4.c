#include <stdio.h>

int main() {
    int n;  // Variable to store the user input

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is positive
    if (n > 0) {
        printf("Positive\n");
    } else {
        // Number is zero or negative
        printf("Non-positive\n");
    }

    return 0;  // End of the program
}
