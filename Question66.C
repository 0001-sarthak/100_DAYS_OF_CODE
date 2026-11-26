
#include <stdio.h>

int main()
{
    int a[100], n, num, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &num);

    i = n - 1;

    while(i >= 0 && a[i] > num)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = num;
    n++;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
