#include <stdio.h>
#include <string.h>

int main() {
    int customerID, units;
    float chargePerUnit, totalAmount, surcharge = 0;
    char customerName[50];

    // Prompt the user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Determine the charge per unit based on units consumed
    if (units < 200) {
        chargePerUnit = 1.20;
    } else if (units >= 200 && units < 400) {
        chargePerUnit = 1.50;
    } else if (units >= 400 && units < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    // Calculate total amount
    totalAmount = units * chargePerUnit;

    // Apply surcharge if the total amount exceeds Ksh 400
    if (totalAmount > 400) {
        surcharge = totalAmount * 0.15;
        totalAmount += surcharge;
    }

    // Ensure minimum bill is Ksh 100
    if (totalAmount < 100) {
        totalAmount = 100;
    }

    // Display the result
    printf("\nCustomer ID: %d", customerID);
    printf("\nCustomer Name: %s", customerName);
    printf("\nUnits Consumed: %d", units);
    printf("\nCharges per Unit: Ksh %.2f", chargePerUnit);
    printf("\nTotal Amount to Pay: Ksh %.2f\n", totalAmount);

    return 0;
}
