#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter num of n : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("The Result of sum %d",sum);


    return 0;
}
