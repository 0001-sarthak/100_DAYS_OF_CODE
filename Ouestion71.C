
#include <stdio.h>

int main()
{
    int r, c, i, j;

    // Read rows and columns
    scanf("%d %d", &r, &c);

    int a[r][c];

    // Read matrix elements
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Print matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
