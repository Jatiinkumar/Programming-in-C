/*Experiment 3: Conditional Statements
1. Write a c program to check whether a number is even or odd*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        {
        printf("%d is Even.\n", num);
        }
    else
        {
        printf("%d is Odd.\n", num);
        }

    return 0;
}