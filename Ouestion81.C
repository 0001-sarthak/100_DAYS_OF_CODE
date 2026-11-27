
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, count = 0;

    // Read string
    scanf("%s", str);

    // Count characters
    while(str[i] != '\0')
    {
        count++;
        i++;
    }

    // Print count
    printf("%d", count);

    return 0;
}
