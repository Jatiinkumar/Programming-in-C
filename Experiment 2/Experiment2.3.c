/* Experiment 2: Operators
3. ⁠Write a program to calculate Compound Interest. */

#include <stdio.h>
#include <math.h>

int main()
 {
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    double principal, rate, time, CompoundInterest, amount;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);
    CompoundInterest = amount - principal;

    printf("\nPrincipal Amount = %.2lf", principal);
    printf("\nRate of Interest = %.2lf%%", rate);
    printf("\nTime (years) = %.2lf", time);
    printf("\nCompound Interest = %.2lf",CompoundInterest);
    printf("\nTotal Amount = %.2lf\n", amount);

    return 0;
 }