/* Experiment 2: Operators
4. ⁠Write a program to find the roots of the quadratic equations. */

#include <stdio.h>
#include <math.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are different and real.\n");
        printf("Root1 = %.2lf and Root2 = %.2lf\n", root1, root2);
    }

    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("Roots are equal and real.\n");
        printf("Root1 = Root2 = %.2lf\n", root1);
    }

    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are different and complex.\n");
        printf("Root1 = %.2lf + %.2lfi and Root2 = %.2lf - %.2lfi\n",
        realPart, imagPart, realPart, imagPart);
    }

    return 0;
}