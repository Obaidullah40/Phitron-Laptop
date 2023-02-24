#include<stdio.h>
int n, ara[1000];

int is_prime();
void getAverage();

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    is_prime();
    getAverage();

    return 0;
}


int is_prime() 
{
    int count = 0, *pointer = ara;
    for (int i = 1; i <= n; i++)
    {
        int prime = 1, m = *pointer;
        for (int j = 2; j < m; j++)
        {
            if (m % j == 0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
            count++;
        pointer++;
    }
    printf("Prime numbers: %d\n",count);
}


void getAverage()
{
    int tEven = 0, sum = 0;
    int *pointer = ara;
    for (int i = 1; i <= n; i++)
    {
        if ((*pointer) % 2 == 0)
        {
            sum += (*pointer);
            tEven++;
        }
        pointer++;
    }
    float average = (sum * 1.0) / tEven;
    printf("Average of all even integers: %.2f\n",average);
}
