#include<stdio.h>
int  Mark_Range(int n);

int main()
{
    int n;
    scanf("%d", &n);
    
    printf("%c", Mark_Range(n));
    return 0;
}


int Mark_Range(int n)
{
    char ans;
    if (100 >= n && n >= 80)
    {
        ans = 'A';
    }
    else if(79 >= n && n >= 60)
    {
        ans = 'B';
    }
    else if(59 >= n && n >= 40)
    {
        ans = 'C';
    }
    else if(39 >= n && n >= 0)
    {
        ans = 'F';
    }
    return ans;
}
