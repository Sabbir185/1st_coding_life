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



    int uppersum = 0;
    int lowersum = 0;

    for(i=0;i<3; i++)
    {
       for( j=0;j<3;j++ )
       {
           if(i<j)
           {
             uppersum = uppersum + a[i][j] ;
           }
           if(i>j)
           {
             lowersum = lowersum + a[i][j] ;
           }
       }
    }
    printf("\nThe sum of Upper_Triangle is : %d",uppersum);
    printf("\nThe sum of Lower_Triangle is : %d",lowersum);

    return 0;
}

