/*Experiment 5: Variable and Scope of Variable:
5.1- Declare a global variable outside all functions and use it inside various functions to understand its accessibility.*/

#include <stdio.h>

int num = 10;

void show()
{
    printf("Inside show(): num = %d\n", num);
}

int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    printf("Inside main(): num = %d\n", num);
    show();
    return 0;
}
