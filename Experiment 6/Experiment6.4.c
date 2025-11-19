/*Experiment 6: Array-
6.4- WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B.
Read matrix A and matrix B in row major order respectively.
Print both the input matrices and resultant matrix with suitable
headings and output should be in matrix format only.
Program must check the compatibility of orders of the matrices for multiplication.
Report appropriate message in case of incompatibility*/

#include <stdio.h>
int main()
{
    printf("Name - Jatin Kumar\nSAP ID - 590027886\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q;
    int i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d%d", &m, &n);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d%d", &p, &q);

    if(n != p)
    {
        printf("Matrix multiplication not possible.\n");
        printf("Number of columns of A must be equal to number of rows of B.\n");
        return 0;
    }

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMatrix A:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < q; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix (A x B):\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
