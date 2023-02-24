#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Please enter 4 numbers: ");
    scanf("%d %d %d %d", &a ,&b, &c, &d);

    /* Largest code */

    if(a>b && a>c && a>d)
    {
        printf("Largest = %d\n",a);
    }
    else if (b>a && b>c && b>d)
    {
     
        printf("Largest = %d\n",b);
    }
    else if (c>a && c>b && c>d)
    {
            printf("Largest = %d\n",c);
    }
    else if (d>a && d>b && d>c)
    {
            printf("Largest = %d\n",d);
    }

    /* ================================ */

     /* Smallest code */

    if(a<b && a<c && a<d)
    {
        printf("Smallest = %d",a);
    }
    else if (b<a && b<c && b<d)
    {
     
        printf("Smallest = %d",b);
    }
    else if (c<a && c<b && c<d)
    {
            printf("Smallest = %d",c);
    }
    else if (d<a && d<b && d<c)
    {
            printf("Smallest = %d",d);
    }

    return 0;
}