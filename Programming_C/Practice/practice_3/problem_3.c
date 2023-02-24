#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("Please enter a number: ");
    if(a%2 == 0){
        printf("EVEN");
    }else{
        printf("Odd");
    }

    return 0;
}