#include<stdio.h>

int main()
{
    int n,cal,row;
    printf("Enter value of n : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(cal=1;cal<=n;cal++)
        {
            if(row==cal || cal+row==n+1)
                printf(" * ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;

}
