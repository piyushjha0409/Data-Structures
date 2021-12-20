#include <stdio.h>
    void main()
    {

        int i, j, r, c, array[10][10];
        printf("Enter the no of rows:");
        scanf("%d",&r);
        printf("Enter the no of cols:");
        scanf("%d",&c);

        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("array[%d][%d] = ", i, j);
                scanf("%d", &array[i][j]);
            }
        }

        printf("matrix is\n");
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }

        for (i = 1; i <= r; i++)
        {
            printf("\n");
            for (j = 1; j <= c; j++)
            {
                if (i >= j)
                {
                    printf("%d ", array[i][j]);
                }
                else
                {
                    printf("\t");
                }
            }

        }

        printf("\n\n");
        for (i = 1; i <= r; i++)
        {
            printf("\n");
            for (j = 1; j <= c; j++)
            {
                if (j >= i)
                    {
                    printf("%d ", array[i][j]);
                    }
                    else
                    {
                    //printf("\t");
                }
            // printf("\n");

        }

    }
    
    }