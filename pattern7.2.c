#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ",col);
        }
        for(col=1;col<=row;col++)
        {
            printf("%c",row+96);
        }
        printf("\n");
    }

    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ",col);
        }
        for(col=1;col<=row;col++)
        {
            printf("%c",row+96);
        }
        printf("\n");
    }

    getch();
}

