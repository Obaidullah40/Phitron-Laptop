#include<stdio.h>

int transpose(int matrix[5][5], int row, int col);

int main()
{
    int row = 3, col = 3;
    int matrix[5][5];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            scanf("%d", &matrix[i][j]);
        } 
    }
    transpose(matrix, row, col);

    return 0;
}

int transpose(int matrix[5][5], int row, int col)
{
    int transpose[5][5];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("\n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}