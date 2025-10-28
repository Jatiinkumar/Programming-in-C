/*Experiment 4: Loops
4.3:Write seperate programs for each patterns.
8.*/

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
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    for(i=4;i>=1;i--)
    {
        for(s=5;s>i;s--)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}