// [5] Write a C program to input basic salary of an employee and calculate gross salary.

#include <stdio.h>

int main() {
    float basic_salary, gross_salary;
    float da, hra;

    // Input basic salary from user
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    // Calculate Dearness Allowance (DA) and House Rent Allowance (HRA)
    if (basic_salary <= 10000) {
        da = 0.2 * basic_salary;
        hra = 0.8 * basic_salary;
    } else if (basic_salary <= 20000) {
        da = 0.25 * basic_salary;
        hra = 0.9 * basic_salary;
    } else {
        da = 0.3 * basic_salary;
        hra = 0.95 * basic_salary;
    }

    // Calculate gross salary
    gross_salary = basic_salary + da + hra;

    // Print gross salary
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
