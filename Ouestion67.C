
#include <stdio.h>

int main()
{
    int a[100], n, pos, num, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &pos, &num);

    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
        return 0;
    }

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = num;
    n++;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
