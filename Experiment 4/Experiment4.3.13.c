/*Experiment 4: Loops
4.3:Write seperate programs for each patterns.
13.*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int i, j, k;
    for (i = 1; i <= 5; i++)
        {
            for (k = 1; k < i; k++)
            {
                printf(" ");
            }
            for (j = 5; j >= i; j--)
            {
                printf("%d", j);
            }

            printf("\n");
        }
return 0;
}