#include<stdio.h>
int main()
{
    int n,cal,row,count=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(cal=1;cal<=row;cal++)
        {
            printf("%d ",++count);
        }
        printf("\n");
    }

    return 0;
}
