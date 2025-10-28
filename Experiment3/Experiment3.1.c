/*Experiment 3: Conditional Statements
2. WAP to check if the triangle is valid or not.If the validity is estabilished,
do check if the triangle is isosceles,equilateral, right angle, or scalene.
Take sides of the triangle as input from the user.*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
     {
        printf("Triangle is valid\n");

        if (a == b && b == c)
            {
            printf("Equilateral triangle\n");
            }
        else if (a == b || b == c || a == c)
            {
            printf("Isosceles triangle\n");
            }
        else
            {
            printf("Scalene triangle\n");
            }

        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            {
            printf("Right angled triangle\n");
            }
     }
    else
        {
        printf("Triangle is not valid\n");
        }

    return 0;
}