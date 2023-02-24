#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int row = 0, col = 0;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)      
        {
            if (a[i][j] == i && a[i][j] == j)
            {
                a[i][j] += 3;
            }
            else if (a[i][j] == i)
            {
                a[i][j] += 2;
            }
            else if (a[i][j] == j)
            {
                a[i][j] += 1;
            }   
        }  
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
