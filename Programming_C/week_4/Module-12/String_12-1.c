#include<stdio.h>
int main()
{
    char name[20] = "muhammad Obaidullah";

    name[1] = 'o';
    name[19] = '\0';

    printf("%s", name);
    return 0;
}