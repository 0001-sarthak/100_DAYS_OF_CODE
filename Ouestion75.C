
#include <stdio.h>

int main()
{
    int r, c, i, j;

    // Read rows and columns
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], sum[r][c];

    // Read first matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Read second matrix
    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Add two matrices
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
