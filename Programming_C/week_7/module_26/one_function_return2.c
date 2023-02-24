#include<stdio.h>

int find_max_min(int n, int ara[], int *max, int *min);

int main()
{
    int n, ara[1000];
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int max, min;
    find_max_min(n, ara, &max, &min);

    printf("max = %d, min = %d \n", max, min);
    return 0;
}

int find_max_min(int n, int ara[], int* max, int* min)
{
    *max = ara[0];
    *min = ara[0];
    for (int i = 0; i < n; i++)
    {
        if (ara[i] > *max)
        {
            *max = ara[i];
        }
        if (ara[i] < *min)
        {
            *min = ara[i];
        }
        
    }
    
}