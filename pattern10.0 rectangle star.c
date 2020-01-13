#include<stdio.h>

int main()
{
    int cal,row,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for( row=1; row<=n; row++)
    {
        for(cal=1; cal<=n; cal++)
        {
            if(row==1 || row==n || cal==1 || cal==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
