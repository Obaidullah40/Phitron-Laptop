#include<stdio.h>
int main()
{
    char Name[2000], i;

    fgets(Name, sizeof(Name), stdin);

    for ( i = 0; Name[i] != 0; i++)
    {
        if(Name[0]>='a' && Name[0]<='z')
        Name[i] -= 32;
    }

    puts(Name);
    return 0;
}