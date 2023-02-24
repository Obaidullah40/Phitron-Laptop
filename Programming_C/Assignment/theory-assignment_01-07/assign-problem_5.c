#include<stdio.h>
int main(){
    int a;
    printf("Please enter some numbers: ");
    scanf("%d", &a);
    while(a > 1)
    {
        printf("%d, ", a);
        if(a % 2 == 0)
        {
            a = a / 2;
        }
        else
        {
            a--;
        }
    }
    printf("%d", a);

    return 0;
}
