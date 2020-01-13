#include<stdio.h>
int main()
{
    int i,count=0,j,n;
    printf("Enter any integer value : "):
    scanf("%d",&n)

    for( i=2;i<=n; i++ )
    {
            for( j=2;j<=i-1; j++)
            {
              if( i%j == 0)
              {
                  count = count + 1 ;
              }
            }
            if ( count == 0)
            {
                printf("%d ",i);
            }
            else
            {
                count = 0;
            }
    }

 return 0;

}
