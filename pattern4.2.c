#include<stdio.h>
int main()
{
    int n,col,row;
    printf("Enter the value n : ");
    scanf("%d",&n);
    // 1st type 2
    for( row=1; row<=n; row++)
    {
        for( col=1; col<=row; col++)
        {
            printf("%d ",row%2);
        }
        printf("\n");
    }
    // now type 3

    for( row=n-1; row>=1; row--) // i want to reduce 1st row so , n-1 now it will start from 2nd row
    {
        for( col=1; col<=row; col++)
        {
            printf("%d ",row%2);
        }
        printf("\n");
    }
    return 0;
}


