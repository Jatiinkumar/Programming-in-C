/*Experiment 4: Loops
4.3:Write seperate programs for each patterns.
3.*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int i,j,n=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
return 0;
}