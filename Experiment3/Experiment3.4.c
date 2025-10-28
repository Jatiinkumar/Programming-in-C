/*Experiment 3
4.Write a program to check if three points (x1,y2), (x2,y2), (x3,y3) are collinear or not*/

#include <stdio.h>

int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int x1, y1, x2, y2, x3, y3;
    int area;

    printf("Enter cordinates of first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter cordinates of second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter cordinates of third point (x3 y3): ");
    scanf("%d %d", &x3, &y3);

    area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);

    if (area == 0)
    {
        printf("The points are collinear\n");
    }
    else
    {
        printf("The points are not collinear\n");
    }

    return 0;
}