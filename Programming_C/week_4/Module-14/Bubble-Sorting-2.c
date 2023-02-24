 #include<stdio.h>
 int main()
 {
    int n = 8, i, j, temp;
    int sort[8] = {12, 7, 9, 3, 15, 2, 6, 5};

    for ( j = 0; j < n; j++)
    {
        for (i = 0; i < (n - 1); i++)
        {
            if (sort[i] > sort[i + 1])
            {
                temp = sort[i];
                sort[i] = sort[i + 1]; // for swappin
                sort[i + 1] = temp;
            }
        }
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d ", sort[i]);
    }
    printf("\n");

    return 0;
 }