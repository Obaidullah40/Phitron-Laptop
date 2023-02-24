#include <stdio.h>
#include <string.h>

int evenOddSequence(int ara[], int n, int k);
int sequencePrint(int arranged[], int n, int k);



int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int ara[1500];

    evenOddSequence(ara, n, k);

    return 0;
}



int evenOddSequence(int ara[], int n, int k)
{
    int arranged[n], count=1;
    for(int i=1; i<=n; i++)
    {
        ara[i] = i;
    }

    for (int i = 1; i <=n; i++)
    {
        if (ara[i] % 2 == 0)
        {
            arranged[count] = ara[i];
            count++;
        }
    }

    for (int i = 1; i <=n; i++)
    {
        if (ara[i] % 2 == 1)
        {
            arranged[count] = ara[i];
            count++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
      printf("%d ", arranged[i]);
    }

    sequencePrint(arranged, n, k);
}


int sequencePrint(int arranged[], int n, int k)
{
    int i;
    for (int i = 1; i <= n; i++)
    {
        if (i == k)
        {
           printf("\nThe %dth element in this sequence is %d",k, arranged[i]);    
        }
    }
}
