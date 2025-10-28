/*Experiment 3: Conditional Statements
3. WAP to compute the BMI index of the person and print the BMI values as per the following ranges.
You can use the following formula to compute BMI= weight (kgs)/ Height (Mts) * Height (Mts)*/

#include <stdio.h>

int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");


    float w, h, bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &w);

    printf("Enter height in m: ");
    scanf("%f", &h);

    bmi = w / (h * h);

    printf("BMI = %f\n", bmi);

    if (bmi < 15) {
        printf("Starvation\n");
    }
    else if (bmi >= 15.1 && bmi <= 17.5) {
        printf("Anorexic\n");
    }
    else if (bmi >= 17.6 && bmi <= 18.5) {
        printf("Underweight\n");
    }
    else if (bmi >= 18.6 && bmi <= 24.9) {
        printf("Ideal\n");
    }
    else if (bmi >= 25 && bmi <= 25.9) {
        printf("Overweight\n");
    }
    else if (bmi >= 30 && bmi <= 39.9) {
        printf("Obese\n");
    }
    else if (bmi >= 40) {
        printf("Morbidly Obese\n");
    }

    return 0;
}