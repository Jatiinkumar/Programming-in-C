/*Experiment 4: Loops
2.Write a program to print the multiplication table of the number entered by the user.
It should be in correct formatting. Num * 1-Num.*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6"); printf("\n-------------------------------------\n");

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    for(int i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", num, i, num * i);
        }

    return 0;
}