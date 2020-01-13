#include<stdio.h>
int main()
{
    int n,col,row;
    printf("Enter the value n : ");
    scanf("%d",&n);

    for( row=n; row>=1; row--)
    {
        for( col=1; col<=row; col++)
        {
            printf("%c ",col+64);
        }
        printf("\n");
    }
    return 0;
}

