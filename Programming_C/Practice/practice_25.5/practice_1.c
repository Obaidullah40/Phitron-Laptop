#include<stdio.h>

int count(int n, int are[], int k);

int main()
{
    int n, are[1000], k;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &are[i]);
    }
    printf("Enter the strictly value\n");
    scanf("%d", &k);

    count(n, are, k);
    return 0;
}

int count(int n, int are[], int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (k < are[i] || k > are[i])
        {
            count++;
        }
    }
    printf("%d", count);
}