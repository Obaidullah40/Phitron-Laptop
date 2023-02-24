#include<stdio.h>
#include<string.h>
int main()
{
    char string[1000];
    int n, ans = 0;

    scanf("%s", &string);
    scanf("%d", &n);

    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i] >= 'a' && 'z' >= string[i])
        {
            int k = string[i] += n;
            if(k > 122)
            {
                ans = k - 122;
                string[i] = 96 + ans;
            }
        }
    }
    printf("%s", string);
}
