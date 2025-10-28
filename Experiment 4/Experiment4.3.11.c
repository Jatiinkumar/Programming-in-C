/*Experiment 4: Loops
4.3:Write seperate programs for each patterns.
11.*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int i, j;
    for (i = 5; i >= 1; i--)
        {
            for (j = i; j <= 5; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }
return 0;
}