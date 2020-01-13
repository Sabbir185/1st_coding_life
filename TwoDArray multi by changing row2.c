#include<stdio.h>
// MD.SABBIR AHMMED , CSE , NUBT Khulna ..
int main()
{
    int First_Matrix[10][10],Second_Matrix[10][10],i,j,k,result[10][10],row1,col1,row2,col2;
    printf("Enter 1st Matrix row & column : ");
    scanf("%d %d",&row1,&col1);
    printf("Enter 2nd Matrix row & column : ");
    scanf("%d %d",&row2,&col2);

    while(col1!=row2)
    {
        printf("Error ! Correct 1stMatrix column & 2ndMatrix row : \n");
        printf("Enter 1st Matrix row & column : ");
        scanf("%d %d",&row1,&col1);
        printf("Enter 2nd Matrix row & column : ");
        scanf("%d %d",&row2,&col2);
    }
    // scan for 1st & 2nd Matrix
    printf("Enter 1st_Matrix elements : \n");
    for( i=0;i<row1;i++)
    {
        for( j=0;j<col1;j++)
        {
            printf("First_Matrix[%d][%d] = ",i,j);
            scanf("%d",&First_Matrix[i][j] );
        }
        printf("\n");

    }

    printf("Enter 2nd_Matrix elements : \n");
    for( i=0;i<row2;i++)
    {
        for( j=0;j<col2;j++)
        {
            printf("Second_Matrix[%d][%d] = ",i,j);
            scanf("%d",&Second_Matrix[i][j]);
        }
        printf("\n");

    }

    // print method for 1st & 2nd Matrix
    printf("First_Matrix[%d][%d] = \n",row1,col1 );
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("%d ",First_Matrix[i][j]);
        }
        printf("\n");

    }

    printf("Second_Matrix[%d][%d] = \n",row2,col2 );
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("%d ",First_Matrix[i][j]);
        }
        printf("\n");

    }

    // multiplication method

    int sum = 0 ;
    printf("Result of Multiplication[%d][%d] = \n",row1,col2);
    for(i=0; i<row1;i++ )
    {
        for(j=0;j<col2; j++)
        {
            for(k=0;k<row2; k++)
            {
                sum = sum + First_Matrix[i][k] * Second_Matrix[k][j] ;
                result[i][j] = sum ;
            }
            sum = 0;
        }
    }

    for( i=0; i<row1; i++ )
    {
        for( j=0; j<col2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


  return 0;
}
