
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    // Read string
    scanf("%s", str);

    // Count vowels and consonants
    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' ||
           str[i] == 'i' || str[i] == 'o' ||
           str[i] == 'u' || str[i] == 'A' ||
           str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }

        i++;
    }

    // Print result
    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
