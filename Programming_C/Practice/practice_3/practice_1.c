#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Please enter 3 numbers: ");
    scanf("%d %d %d", &a ,&b, &c);

    if(a==b && a==c){
        printf("They are equal");
    }
    else if(a>b && a>c)
    {
            printf("A is large");
        }else if (b>a && b>c){
            printf("B is large");
        }else if (c>a && c>b){
            printf("C is large");
    }else{
        if(a>b){
            printf("A & C both are bigger");
        }else if(a<c){
            printf("B & C both are bigger");
        }else{
            printf("A & B both are bigger");
        }
    }
   
    return 0;
}