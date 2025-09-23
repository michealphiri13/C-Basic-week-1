#include <stdio.h>

int main() {
    // Declare variables
    char name[100];
    int age;
    char hobby[] = "Coding"; // Replace with your favorite hobby
    char your_name[] = "Your Name"; // Replace with your name
    int your_age = 25; // Replace with your age

    // Print your information
    printf("My name is %s, I am %d years old, and my favorite hobby is %s.\n", your_name, your_age, hobby);

    // Ask user for their name and age
    printf("Enter your name: ");
    scanf("%99s", name); // Leave space for null terminator
    printf("Enter your age: ");
    scanf("%d", &age);

    // Print greeting message
    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}
