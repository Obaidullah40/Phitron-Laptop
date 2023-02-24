#include <stdio.h>
#include <string.h>
#include <math.h>

char chaking(char n[], char l);

int main()
{
    char n[1500];
    scanf("%s", &n);
    int a = chaking(n, '1');
    int b = chaking(n, '7');
    int c = chaking(n, '9');

    if (a == 1 && b == 1 && c == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}







char chaking(char n[], char l)
{
    int ans = 0;
    for (int i = 0; i < strlen(n); i++)
    {
        if (n[i] == l)
        {
            ans = 1;
        }
    }
    return ans;
}