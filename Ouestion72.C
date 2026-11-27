
#include <stdio.h>

int main()
{
    int r, c, i, j, sum = 0;

    // Read rows and columns
    scanf("%d %d", &r, &c);

    int a[r][c];

    // Read matrix elements
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    // Print sum
    printf("%d", sum);

    return 0;
}
