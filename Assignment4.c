#include <stdio.h>
void main () {

    // Assignment 04
    // Program to calculate salary of an employee given basic pay
    // Calculate gross salary and net salary
    // HRA = 10% of basic pay
    // TA = 5% of basic pay
    // Profession Tax = 2% of total salary

    float basicPay, hra, ta, grossSalary, professionTax, netSalary;

    printf("Basic Pay: ");
    scanf("%f", &basicPay);

    hra = 0.10 * basicPay;
    ta = 0.05 * basicPay;
    grossSalary = basicPay + hra + ta;
    professionTax = 0.02 * grossSalary;
    netSalary = grossSalary - professionTax;
    
    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);
}