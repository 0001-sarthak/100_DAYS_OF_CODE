
#include <stdio.h>

int main()
{
    int num, original, rem, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        rem = num % 10;
        fact = 1;

        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == original)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }

    return 0;
}
