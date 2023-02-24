#include<stdio.h>
#include <string.h>

int main()
{
    char f[105], s[105], ans, i, j;
    printf("Enter your 1st alphabet : ");
    fgets(f, sizeof(f), stdin);
    printf("Enter your 2nd alphabet : ");
    fgets(s, sizeof(s), stdin);
 
    for (int i = 0; i < strlen(s); i++)
    {
        if(f[i] >= 'A' && f[i] <= 'Z'){
            f[i] += 32;
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }

    for (i = 0; i < strlen(f) - 1; i++)
    {
        if (f[i] < s[i])
        {
            printf("1st alphabet is the first");
            return 0;
        }
        else if (f[i] > s[i])
        {
            printf("2nd alphabet is the first");
            return 0;
        }
    }
    
    return 0;
}
