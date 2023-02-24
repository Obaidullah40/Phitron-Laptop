#include<stdio.h>
int main()
{
    int i, n=6;
    int ara[n];

    for (i = 0;i<n;i++)
    {
        scanf("%d", &ara[i]);
    }

    int m = ara[0];
    for ( i = 0; i < n; i++)   
    {
        if (ara[i]<m)
        {
            m = ara[i];
        }  
    }
    printf("The minimum value is %d\n",m);


    /* ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; */


    for ( i = 0; i < n; i++)   
    {
        if (ara[i]>m)
        {
            m = ara[i];
        }  
    }
    printf("The maximum value is %d\n",m);

    return 0;
}