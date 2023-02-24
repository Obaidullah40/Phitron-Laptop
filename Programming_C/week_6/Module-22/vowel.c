#include<stdio.h>

int is_vowel(char x)
{
    if (x == 'a' || x == 'o' || x == 'e' || x == 'i' || x == 'u')
    {
        return 1;
    }
    return 0;
}


int main()
{
    char ch = getchar();

    if (is_vowel(ch) == 1)
    {
        printf("The character is a vowel.\n");
    }
    else
    {
        printf("The character is a consonant.\n");
    }

    return 0;
}