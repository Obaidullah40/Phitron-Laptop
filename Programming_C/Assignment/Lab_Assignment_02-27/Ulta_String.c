#include<stdio.h>
#include<string.h>
char str[1000];

int sorter(int n);
    
int main()
{
    scanf("%s", &str);
    int size = strlen(str);
    sorter(size);
    printf("%s", str);
    return 0;
}


int sorter(int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            
        }
    }
}
