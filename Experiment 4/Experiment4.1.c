/*Experiment 4: Loops
1.Wite a program to enter a number till the user wants.
At the end, it should display the count of positive, negative and zeroes entered.*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int number, positive = 0, negative = 0, zero = 0;
    char choice;

    do
        {
            printf("Enter number: ");
            scanf("%d", &number);

            if (number > 0)
                positive = positive + 1;

            else if (number < 0)
                negative = negative + 1;

            else
                zero = zero + 1;

            printf("Do you want to enter another number? (y/n): ");
            scanf(" %c", &choice);
        }

    while (choice == 'y');

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);

    return 0;
}