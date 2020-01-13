#include<stdio.h>
// MD.SABBIR AHMMED, CSE , NUBT KHULNA
int main()
{
    int i,j,row,col;
    int A[10][10],B[10][10],C[10][10]; // we declare max row & col size if A,B & result C ..
    printf("Enter the size of row & col : ");
    scanf("%d %d",&row,&col);

    // A & B scan method
    for( i=0;i<row; i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for( i=0;i<row; i++)
    {
        for(j=0;j<col;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // A & B print result
    printf("A metrix = \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("b metrix = \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    // calculation method
    printf("\n");

    printf("Addition A + B : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            C[i][j] = A[i][j] + B[i][j] ;
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",C[i][j]) ;
        }
        printf("\n");
    }
    printf("\n");

    // Subtraction

    printf("Addition A - B : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            C[i][j] = A[i][j] - B[i][j] ;
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",C[i][j]) ;
        }
        printf("\n");
    }


}
