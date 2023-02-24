/* #include<stdio.h>
int main()
{
    int i, j;
    int N = 7;

    for ( j = 1; j <=N; j++)
    {
        printf("#");
    }
    printf("\n");

    for ( i = 1; i <= (N-2); i++)
    {
        printf("#");
        for ( j = 0; j < (N-2); j++)
        {
            printf(" ");
        }
        printf("#");
        printf("\n");
    }
    // N # stars ;
      for ( j = 1; j <=N; j++)
    {
        printf("#");
    }
    printf("\n");


    return 0;
} */
// ==========================================================
// ==========================================================

                            // Hollow Right angle Triangle

#include<stdio.h>
int main()
{
   int rows_No = 5;
//    scanf("%d", &rows_No);
   
   for (int row = 1; row <= rows_No; row++)
   {
       for (int colNo = 1; colNo <= row; colNo++)
       {
           if ((colNo == 1) || (row == rows_No) || (colNo == row))
           {
               printf("* ");
           }
           else
           {
               printf("  ");
           }
        }
      printf("\n");
   }

   return 0;
} 



/* #include<stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    for (int i = 0; i <= x;i++){
        printf("#");
    }
    printf("\n");

    for (int i = 1; i <= (x - 2);i++){
        printf("#");
        for (int j = 1; j <= (x-1);j++){
            printf(" ");
        }
        printf("#\n");
    }

    for (int i = 0; i <= x; i++){
        printf("#");
    }
    printf("\n");
        return 0;
}
 */