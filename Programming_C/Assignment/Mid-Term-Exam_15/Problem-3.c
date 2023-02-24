#include<stdio.h>

int main()
{
    char a[10];
    char ch = 'a';
    for(int i = 0; i<8;i++)
    {
        a[i] = ch+8-i;        
        printf("%d, ", a[i]);

    }
    a[8] = '\0';
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d, ", a[i]);
    // }
    
    return 0;
}