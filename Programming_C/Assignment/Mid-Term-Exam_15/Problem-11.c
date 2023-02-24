#include<stdio.h>
int main()
{
    int row = 3, col = 3, c = 0, row_all = 0, col_all = 0;
    int a[row][col], ans = 1, pd = 0, sd = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    c = a[0][0] + a[0][1] + a[0][2];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            row_all += a[i][j]  ;    
            col_all += a[j][i]  ;
            if(i==j)
            {
                pd += a[i][j];
            }
            if (i+j==2)
            {
                sd += a[i][j];
            }
        }

        //row chack
        if (c != row_all)
        {
            ans = 0;
        }
        row_all = 0;

        //col chack
        if (c != col_all)
        {
            ans = 0;
        }
        col_all = 0;
    }

    // diagonal matrix
    if(pd != c)
    {
        ans = 0;
    }
    if(sd != c)
    {
        ans = 0;
    }

    // final chack
    if ( ans == 1 )
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
        
    return 0;
}