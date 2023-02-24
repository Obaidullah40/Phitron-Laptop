#include<stdio.h>

int main()
{
    int i = 1, n, m;
    scanf("%d %d", &n, &m);

    while (m != n )
    {
        printf("%d ", n);
        if(n == 23){
            n = 0;
        }
        else{
            n++;
        }
    }
    printf("%d ", n); 
 
    return 0;
}