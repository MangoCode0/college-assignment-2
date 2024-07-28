
// [6]Write a C program to input electricity unit charge and calculate the total electricity bill.

#include <stdio.h>

int main() {
    float unit_charge, total_bill;
    int units;

    // Input the electricity unit charge
    printf("Enter the electricity unit charge (per unit): ");
    scanf("%f", &unit_charge);

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the total bill based on the given rate slabs
    if (units <= 50) {
        total_bill = units * unit_charge;
    } else if (units <= 150) {
        total_bill = 50 * unit_charge + (units - 50) * (unit_charge * 1.5);
    } else if (units <= 250) {
        total_bill = 50 * unit_charge + 100 * (unit_charge * 1.5) + (units - 150) * (unit_charge * 1.8);
    } else {
        total_bill = 50 * unit_charge + 100 * (unit_charge * 1.5) + 100 * (unit_charge * 1.8) + (units - 250) * (unit_charge * 2);
    }

    // Display the total electricity bill
    printf("Total Electricity Bill: %.2f\n", total_bill);

    return 0;
}
