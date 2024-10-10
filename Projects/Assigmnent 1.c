#include <stdio.h>

int main() {
    int bookID;
    int dueDate, returnDate;
    int daysOverdue;
    int fineRate;
    int fineAmount;

    // Get user input
    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date (in days): ");
    scanf("%d", &dueDate);

    printf("Enter Return Date (in days): ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate based on days overdue
    if (daysOverdue <= 0) {
        fineRate = 0; // No fine if the book is returned on or before the due date
        fineAmount = 0;
    } else if (daysOverdue <= 7) {
        fineRate = 20; // Ksh20 for up to 7 days overdue
        fineAmount = daysOverdue * fineRate;
    } else if (daysOverdue <= 14) {
        fineRate = 50; // Ksh50 for 8-14 days overdue
        fineAmount = daysOverdue * fineRate;
    } else {
        fineRate = 100; // Ksh100 for 15 days or more overdue
        fineAmount = daysOverdue * fineRate;
    }

    // Display the results
    printf("\n--- Fine Calculation ---\n");
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate per Day: Ksh%d\n", fineRate);
    printf("Total Fine Amount: Ksh%d\n", fineAmount);

    return 0;
}
