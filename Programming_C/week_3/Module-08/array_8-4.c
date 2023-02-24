#include<stdio.h>
int main()
{
    int i, N;
    int ara[100];

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &ara[i]);
    }

    int evenCounter = 0, oddCounter = 0;

    for ( i = 0; i < N; i++)
    {
        if(ara[i]%2==0)
        {
            evenCounter++;
        }
        else
        {
            oddCounter++;
        }
    }
    printf("No. of evens = %d\n", evenCounter);
    printf("No. of odds = %d\n", oddCounter);

    return 0;
}