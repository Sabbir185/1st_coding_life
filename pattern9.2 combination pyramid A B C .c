#include<stdio.h>

int main()
{
    int cal,row,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for ( row=1; row<=n; row++)
    {
        for(cal=1; cal<=n-row; cal++)
         printf("  ");
        for(cal=1; cal<=2*row-1; cal++)
         printf("%d ",row);

        printf("\n");
    }


    for ( row=n-1; row>=1; row--)
    {
        for(cal=1; cal<=n-row; cal++)
         printf("  ");
        for(cal=1; cal<=2*row-1; cal++)
         printf("%d ",row);

        printf("\n");
    }

   printf("\n SABBIR AHMMED , DEP.OF CSE, NUBTK , KHULNA ");

    return 0;
}
