#include<stdio.h>

int main()
{
    int cal,row,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for( row=1; row<=n; row++)
    {
        for(cal=1; cal<=n-row; cal++)
            printf("  ");
        for(cal=1; cal<=row; cal++)
            printf("* ");

        printf("\n");
    }

    return 0;
}

