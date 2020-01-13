#include<stdio.h>

int main()
{
    int n,cal,row;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(cal=1;cal<=n; cal++)
        {
            if(cal==1 || row==n || cal==row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
