/*Experiment 3
5.According to the gerogian calandar, it was Monday on the date 01/01/01.
If any year is input through the keyboard write a program to find out what is the day on 1st January of this year*/

#include <stdio.h>

int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int year, i, days = 0, day;

    printf("Enter year: ");
    scanf("%d", &year);

    for (i = 1; i < year; i++)
    {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
        {
            days += 2;
        }
        else
        {
            days += 1;
        }
    }

    day = days % 7;

    if (day == 0)
    {
        printf("1st January %d is Monday\n", year);
    }
    else if (day == 1)
    {
        printf("1st January %d is Tuesday\n", year);
    }
    else if (day == 2)
    {
        printf("1st January %d is Wednesday\n", year);
    }
    else if (day == 3)
    {
        printf("1st January %d is Thursday\n", year);
    }
    else if (day == 4)
    {
        printf("1st January %d is Friday\n", year);
    }
    else if (day == 5)
    {
        printf("1st January %d is Saturday\n", year);
    }
    else if (day == 6)
    {
        printf("1st January %d is Sunday\n", year);
    }

    return 0;
}