
#include <stdio.h>

int main()
{
    int num, rem, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;

        if (rem % 2 != 0)
        {
            product = product * rem;
        }

        num = num / 10;
    }

    printf("%d", product);

    return 0;
}
