#include<stdio.h>
int main(){

    int a,b;
    scanf("%d%d",&a,&b);

    int sum = 0 , minus = 0;
    sum = a+b;
    minus = a-b;
    printf("%d %d", sum, minus);
    
    return 0;
}
