#include<stdio.h>
#include<string.h>

int one_two(char ara[], int n);

int main()
{
    char ara[1000];
    scanf("%s", &ara);
    int n = strlen(ara);
    one_two(ara, n);

    return 0;
}


int one_two(char ara[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((i + 2) % 2 == 0)
        {
            printf("%c", ara[i]);
        }
        else
        {
            printf("%c", ara[i]);
            printf("%c", ara[i]);
        } 
    }
}