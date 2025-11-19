/*Experiment 5: Variable and Scope of Variable:
5.2- Declare a local variable inside a function inside a function and try
to access it outside the function. Compare this with accessing
the global variable from within the function.*/

#include <stdio.h>
int g = 10;

void test()
{
    int l = 5;
    printf("Inside test(): local = %d, global = %d\n", l, g);
}

int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    printf("Inside main(): global = %d\n", g);

    test();

    return 0;
}
