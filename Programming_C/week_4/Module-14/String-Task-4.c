#include<stdio.h>
#include<string.h>

int main ()
{
    char word[105];

    fgets(word, sizeof(word), stdin);

    for (int i = 0; i <strlen(word)-1; i++)
    {
        if (word[i]>='A' && word[i]<='Z')
        {
            word[i] += 32;
        }
        if (word[i]=='a' || word[i]=='y' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
        {
            //do nothing
        }
        else
        {
            printf(".%c", word[i]);
        }
    }
    
    return 0;
}