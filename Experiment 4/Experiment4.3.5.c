/*Experiment 4: Loops
4.3:Write seperate programs for each patterns.
5.*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int i,j,s;
    for(i=1;i<=5;i++)
    {
        for(s=5;s>i;s--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
        printf("\n");
    }
return 0;
}