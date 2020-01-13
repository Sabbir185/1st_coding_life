#include<stdio.h>
int main()
{
    int n,cal,row;
    printf("Enter the value : ");
    scanf("%d",&n);

    for(row=1;row<=n; row++)
    {
        for(cal=1;cal<=n-row; cal++)  // space print
            printf("  ");

        for(cal=1;cal<=row;cal++)     // 1st part 1 to n print
            printf("%d ",cal);

        for(cal=row-1;cal>=1;cal--)   // second part n to 1 part . exactly n-1 to 1 ....
            printf("%d ",cal);



         printf("\n");
    }

    for(row=n-1;row>=1; row--)
    {
        for(cal=1;cal<=n-row; cal++)  // space print
            printf("  ");

        for(cal=1;cal<=row;cal++)     // 1st part 1 to n print
            printf("%d ",cal);

        for(cal=row-1;cal>=1;cal--)   // second part n to 1 part . exactly n-1 to 1 ....
            printf("%d ",cal);



         printf("\n");
    }

    printf("\n SABBIR AHMMED, NUBTK, KHULNA, DEP.OF CSE ...");
    printf("\n");

    return 0;
}
