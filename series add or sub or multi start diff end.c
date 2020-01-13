#include<stdio.h>

int main()
{
    int n,start,diff,end,sum=0;
    printf("Input your start diff and end value :\n");

    scanf("%d%d%d",&start,&diff,&end);

    for( n=start ; n<=end; n=n+diff)
    {
        sum = sum + n;
    }
    printf("The sum of series : %d",sum);

    return 0;
}
