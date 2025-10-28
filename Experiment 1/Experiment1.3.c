/*Experiment 1: Installation, Environment Setup and starting with C language
3. Write a program that prompts the user to enter their name and age..*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    char name[20];
    int age;

    printf("whats your name? ");
    scanf("%s", name);

    printf("how old are you? ");
    scanf("%d", &age);

    printf("hi %s you are %d old\n", name, age);
 return 0;
}