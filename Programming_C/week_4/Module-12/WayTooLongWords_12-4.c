#include<stdio.h>
#include<string.h>
int main()
{
    int i, t;
    scanf("%d", &t);
    for ( i = 0; i <= t; i++)
    {
        char words[2000];
    
        fgets(words, sizeof(words), stdin);

        int length = strlen(words) - 1;

        if (length>10)
        {
            printf("%c%d%c\n",words[0],length-2,words[length-1]);
            
        }
        else
        {
            puts(words);
        }
    }
    

    return 0;
}