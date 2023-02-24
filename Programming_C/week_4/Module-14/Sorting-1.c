 #include<stdio.h>
 int main()
 {
    int n = 8, i;
    int sort[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int sortedAra[n];
    
    for (int j = 0; j < n; j++)
    {
        int min = sort[0], min_ind = 0;

        for ( i = 0; i < n; i++)
        {
            if (sort[i]<min)
            {
                min = sort[i];
                min_ind = i;
            } 
        }
        sortedAra[j] = min;
        sort[min_ind] = 9999;

       /*  for ( i = 0; i < n; i++)
        {
            printf("%d ", sort[i]);
        }
        printf("\n"); */
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ", sortedAra[i]);
    }
    
    

    return 0;
 }