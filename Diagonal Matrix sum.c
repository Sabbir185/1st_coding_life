#include<Stdio.h>

int main()
{
    int a[3][3];
    int i,j;
    printf("Enter matrix elements : \n");

    for(i=0;i<3; i++)
    {
       for( j=0;j<3;j++ )
       {
           printf("a[%d][%d] = ",i,j);
           scanf("%d",&a[i][j]);
       }
       printf("\n");
    }

    printf("The matrix is : \n");
    for(i=0;i<3; i++)
    {
       for( j=0;j<3;j++ )
       {
           printf("%d ",a[i][j]);
       }
       printf("\n");
    }

    printf("Diagonal matrix is : \n");

    int sum = 0;
    for(i=0;i<3; i++)
    {
       for( j=0;j<3;j++ )
       {
           if(i==j)
           {
             printf("%d ",a[i][j]);
             sum = sum + a[i][j] ;
           }
       }
    }
    printf("\nThe sum of primary diagonal is : %d",sum);


    return 0;
}
