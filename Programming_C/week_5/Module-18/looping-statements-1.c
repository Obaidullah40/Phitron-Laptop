#include<stdio.h>
#include<math.h>
int main()
{
    int i, sum = 0, SumEven = 0, SumOdd = 0, even = 0, odd = 0;

    for ( i = 1; i <= 50; i++)
    {
        if (i%2==0)
        {
            even = pow(i, 2);
            SumEven += even;
        }
        else
        {
            odd = pow(i, 2);
            SumOdd += odd;
        }
        sum = SumOdd - SumEven;
        
    }

    printf("sum %d", sum);
    return 0;
}