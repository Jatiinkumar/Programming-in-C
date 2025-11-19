/*Experiment 6: Array-
6.2- Write a program to read a list of integers and store it in a single dimentional array.
Write a C program to count and display positive, negative, odd, and even numbers in an array*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int n, i;
    int arr[100];
    int pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
