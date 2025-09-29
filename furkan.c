//[1] calculate marks ,percentage ,grade of student.

// #include<stdio.h>
// int main(){
//     int physics,chemistry,mathematics,biology,computer;
//     float total_marks,percentage;
//     char grade;

//     printf("enter physics marks: ");
//     scanf("%d", &physics);
//     printf("enter chemistry marks: ");
//     scanf("%d", &chemistry);
//     printf("enter mathematics marks: ");
//     scanf("%d", &mathematics);
//     printf("enter biology marks: ");
//     scanf("%d", &biology);
//     printf("enter computer marks: ");
//     scanf("%d", &computer);

//     total_marks = physics + chemistry + mathematics + biology + computer;
//     percentage = total_marks/5;

//     if (percentage>=85 && percentage<=100){
//         grade = 'A';
//     }
//     else if (percentage>=70 && percentage<85){
//         grade = 'B';
//     }
//     else if (percentage>=55 && percentage<70){
//         grade = 'C';
//     }
//     else if (percentage>=40 && percentage<55){
//         grade = 'D';
//     }else{
//         grade = 'F';
//     }

//     printf("total marks: %.2f \n", total_marks);
//     printf("percentage: %.2f\n ", percentage);
//     printf("grade: %c\n", grade);

//     return 0;
// }

// // [2] input week number (1-7) and print the corresponding days of week name.

// #include<stdio.h>

// int main(){
//     int day;
//     printf("enter day (1-7): ");
//     scanf("%d",&day);
//     switch(day){
//         case 1:printf("monday");
//         break;
//         case 2:printf("tuesday ");
//         break;
//         case 3:printf("wensday ");
//         break;
//         case 4:printf("thursday ");
//         break;
//         case 5:printf("fryday ");
//         break;
//         case 6:printf("saturday ");
//         break;
//         case 7:printf("sunday ");
//         break;
//         default:printf("not valid day");

//     }
// }

// // [3] Check wether a number is palindrome or not.

// #include <stdio.h>

// int main() {
//     int n, reversed = 0, remainder, original;

//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     original = n;

//     // Reverse the integer
//     while (n!= 0) {
//         remainder = n % 10;
//         reversed = reversed * 10 + remainder;
//         n /= 10;
//     }

//     // Check if the original and reversed numbers are equal 


//     if(original == reversed) {
//         printf("%d is pallindrome", original);
//     }else {
//         printf("%d is not pallindrome",original);
        
//     return 0;
// }

// }

// [4]armstrom number.

// #include <stdio.h>



// int main() {
//     int n, arm = 0, remainder, original;

//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     original = n;

//     //
//     while (n > 0) {
//         remainder = n % 10;
//         arm = remainder*remainder*remainder + arm ;
//         n /= 10;
//     }

//     // Check if the original and arm numbers are equal

//     if(original == arm) {
//         printf("%d is armstrom", original);
//     }else {
//         printf("%d is not armstrom",original);
        
//     return 0;
// }

// }

// [5] Write a C program to input basic salary of an employee and calculate gross salary.

// #include <stdio.h>

// int main() {
//     float basic_salary, gross_salary;
//     float da, hra;

//     // Input basic salary from user
//     printf("Enter Basic Salary: ");
//     scanf("%f", &basic_salary);

//     // Calculate Dearness Allowance (DA) and House Rent Allowance (HRA)
//     if (basic_salary <= 10000) {
//         da = 0.2 * basic_salary;
//         hra = 0.8 * basic_salary;
//     } else if (basic_salary <= 20000) {
//         da = 0.25 * basic_salary;
//         hra = 0.9 * basic_salary;
//     } else {
//         da = 0.3 * basic_salary;
//         hra = 0.95 * basic_salary;
//     }

//     // Calculate gross salary
//     gross_salary = basic_salary + da + hra;

//     // Print gross salary
//     printf("Gross Salary: %.2f\n", gross_salary);

//     return 0;
// }

// [6]Write a C program to input electricity unit charge and calculate the total electricity bill.

// #include <stdio.h>

// int main() {
//     float unit_charge, total_bill;
//     int units;

//     // Input the electricity unit charge
//     printf("Enter the electricity unit charge (per unit): ");
//     scanf("%f", &unit_charge);

//     // Input the number of units consumed
//     printf("Enter the number of units consumed: ");
//     scanf("%d", &units);

//     // Calculate the total bill based on the given rate slabs
//     if (units <= 50) {
//         total_bill = units * unit_charge;
//     } else if (units <= 150) {
//         total_bill = 50 * unit_charge + (units - 50) * (unit_charge * 1.5);
//     } else if (units <= 250) {
//         total_bill = 50 * unit_charge + 100 * (unit_charge * 1.5) + (units - 150) * (unit_charge * 1.8);
//     } else {
//         total_bill = 50 * unit_charge + 100 * (unit_charge * 1.5) + 100 * (unit_charge * 1.8) + (units - 250) * (unit_charge * 2);
//     }

//     // Display the total electricity bill
//     printf("Total Electricity Bill: %.2f\n", total_bill);

//     return 0;
// }
