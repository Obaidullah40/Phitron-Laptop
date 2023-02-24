 #include<stdio.h>
 int main()
 {
    int n = 11, i, j, temp;
    int sort[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    for ( j = 0; j < 5; j++)
    {
        for (i = 0; i < (n - 1); i++)
        {
            if (sort[i] > sort[i + 1])
            {
                temp = sort[i];
                sort[i] = sort[i + 1];
                sort[i + 1] = temp;
            }
        }
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d ", sort[i]);
    }

    return 0;
 }