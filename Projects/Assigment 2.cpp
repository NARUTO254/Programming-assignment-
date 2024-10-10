#include <stdio.h> // Include standard input-output library

int main() {
    int age;
    float income;

    // Get user's age
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input. Please enter a valid number for age.\n");
        return 1; // Exit the program if input is invalid
    }

    // Get user's income
    printf("Enter your annual income (in Sh): ");
    if (scanf("%f", &income) != 1) {
        printf("Invalid input. Please enter a valid number for income.\n");
        return 1; // Exit the program if input is invalid
    }

    // Check eligibility criteria
    if (age >= 21 && income >= 21000) {
        printf("You are eligible for the loan.\n");
    } else {
        printf("You are not eligible for the loan.\n");
    }

    return 0;
}
