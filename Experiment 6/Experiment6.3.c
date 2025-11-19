/*Experiment 6: Array-
6.3Write a program to read a list of integers and store it in a single dimentional array.
Write a c program to find the frequency of a particular number in a list of integers*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int n, i, num, count = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to find its frequency: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
            count++;
    }

    printf("Frequency of %d = %d\n", num, count);

    return 0;
}
