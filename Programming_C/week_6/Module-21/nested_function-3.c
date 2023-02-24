#include<stdio.h>
#include<math.h>

float f(int x, int y);

int main()
{
    int x, y;
    x = 12;
    y = 7;
    float ans = f(x, y);

    printf("%f", ans);
    return 0;
}


float f(int x, int y)
{
    int funson = absolute(x - 3) + pow(y + 4, 2);
    return sqrt(funson);
}

int absolute(int x)
{
    if (x>=0)
    {
        return x;
    }
    else
    {
        return x * (-1);
    }
    
}