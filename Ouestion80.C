
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j, k;

    // Read dimensions of first matrix
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];

    // Read first matrix
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Read dimensions of second matrix
    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
    int result[r1][c2];

    // Read second matrix
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Check multiplication condition
    if(c1 != r2)
    {
        printf("Multiplication not possible");
        return 0;
    }

    // Initialize result matrix
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            for(k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result matrix
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
