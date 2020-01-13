#include<stdio.h>
int main()
{
    int n,col,row;
    printf("Enter value of n : ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ",col);
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col%2); // mod , print 1 or 0 . for row just change col<=>row
        }
        printf("\n");
    }

    return 0;
}
