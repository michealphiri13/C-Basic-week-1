#include <stdio.h>

int main() {
    int i, n;

    // Input: Ask the user for a number
    printf("Enter n: ");
    scanf("%d", &n);

    // Process & Output: Loop from 1 to n
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            // Print even numbers normally
            printf("%d ", i);
        } else {
            // Print odd numbers inside square brackets
            printf("[%d] ", i);
        }
    }

    // End of program
    return 0;
}
