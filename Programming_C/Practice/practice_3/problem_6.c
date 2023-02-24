#include<stdio.h>
int main()
{
    int x ,y,z;
    printf("please enter tow number: ");
    scanf("%d %d", &x, &y);
    
    z = x+y;
    if(z >= 100)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}