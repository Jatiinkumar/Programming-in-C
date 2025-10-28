/*Experiment 4: Loops
4.4- The population of a town is 100000. The population has increased
steadily at the rate of 10% per year for the last 10 years.
Write a program to determine the population at the end of each year in the last decade.*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    float pop=100000;
    int i;
    for(i=1;i<=10;i++)
    {
        pop=pop+(pop*0.10);
        printf("Population at the end of year %d = %.0f\n",i,pop);
    }
return 0;
}