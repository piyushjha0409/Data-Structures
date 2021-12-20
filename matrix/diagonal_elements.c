#include<stdio.h>

int main()
{
    int array1[10][10],i,j,r,c,sum = 0;
    printf("Enter no. of rows :: ");
        scanf("%d", &r);
        printf("\nEnter no. of cols :: ");
        scanf("%d",&c);
        printf("\nEnter values to the matrix :: \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                 printf("\nEnter a[%d][%d] value :: ",i,j);
                 scanf("%d", &array1[i][j]);
        }
    }

    printf("\nThe Diagonals elements of a matrix are :: \n\n");


    if(r==c)
    {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {

                    if(i==j)
                        printf("\t%d", array1[i][j]);
                    else
                        printf("\t");
                }
                printf("\n\n");
            }
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }

    return 0;
}