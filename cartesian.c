#include<stdio.h>

int main(void)
{
        int array1[100];
        int array2[100];
        int array3[100];
        int cartesian_array[100][100];
        int m,n,o;
        int i,j;
        int p=0,q=0,r=0;
        int x,y,z;
        int cartesian_arr_row_len;
        int cartesian_arr_col_len;


        printf("Enter the size of first array:\n");
        scanf("%d",&m);

        printf("Enter the size of second array:\n");
        scanf("%d",&n);

        printf("Enter the size of third array:\n");
        scanf("%d",&o);

        printf("Enter the first array elements:\n");
        for(i=0;i<m;i++)
        scanf("%d",&array1[i]);

        printf("Enter the second array elements:");
        for(i=0;i<n;i++)
        scanf("%d",&array2[i]);

        printf("Enter the third array elements:");
        for(i=0;i<o;i++)
        scanf("%d",&array3[i]);

        cartesian_arr_row_len=m*n*o;
        cartesian_arr_col_len=3;

        x=cartesian_arr_row_len/m;
        y=cartesian_arr_row_len/(m*n);
        z=o;

        for(i=0;i<cartesian_arr_row_len;i++)
        {
                for(j=0;j<cartesian_arr_col_len;j++)
                {
                        if(j==0)
                        {
                                cartesian_array[i][j]=array1[p/x];
       p++;
                        }

                        if(j==1)
                        {
                                cartesian_array[i][j]=array2[q/y];
                                q++;
                                if(q>=n*y)
                                q=0;
                        }

                        if(j==2)
                        {
                                cartesian_array[i][j]=array3[r%z];
                                r++;
                        }
                }

        }

        printf("The Cartesian Product of two arrays is:\n");
        for(i=0;i<cartesian_arr_row_len;i++)
        {
                for(j=0;j<cartesian_arr_col_len;j++)
                {
                        printf("%d\t",cartesian_array[i][j]);
                }
                printf("\n");
        }

        return 0;
}
