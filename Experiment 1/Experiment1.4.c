/*Experiment 1: Installation, Environment Setup and starting with C language
4. Write a C program to add two numbers, take number from user.*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    int a, b, c;
    printf("number_one? ");
    scanf("%d", &a);
    printf("number_two? ");
    scanf("%d", &b);
    c = a + b;
    printf("answer = %d\n", c);

 return 0;
}