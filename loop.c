#include<stdio.h>

int main()
{
    int n,col,row;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for( col=1; col<=n; col++)  // loop gurbe nth bar
    {
        for(row=1; row<=col; row++)  // every bar gurar somay ja print korbe
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
