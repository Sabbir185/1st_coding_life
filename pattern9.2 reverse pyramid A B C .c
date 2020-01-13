#include<stdio.h>

int main()
{
    int n,cal,row;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for ( row=n ; row>=1; row--)
    {
        for(cal=1; cal<=n-row; cal++)
            printf("  ");
        for(cal=1; cal<=2*row-1; cal++)
            printf("%d ",row);
        printf("\n");
    }

    return 0;
}
