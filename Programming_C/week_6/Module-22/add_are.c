#include<stdio.h>
int add_sum(int n, int nums[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    return sum;
}


int main()
{
    int num[] = {133, 166, 71, 52, 61, 79, 88, 94, 40, 69, 100, 50};

    int sum = add_sum(12, num);
    printf("The sum is %d\n", sum);
    return 0;
}