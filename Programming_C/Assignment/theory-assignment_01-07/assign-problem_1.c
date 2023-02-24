#include<stdio.h>
int main()
{
    int a=5, b=13; 
    //Write code here 
    int x = a, y = b;
    a = y;
    b = x;

    //End of code 
    printf("%d and %d" , a, b);

    return 0;
}

