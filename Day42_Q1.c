// Count vowels and consonants in a string.
#include <stdio.h>
int main()
{
    char str[100];
    int i, vowels = 0, consonants = 0;
    printf("Enter the str: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);
    return 0;
}
