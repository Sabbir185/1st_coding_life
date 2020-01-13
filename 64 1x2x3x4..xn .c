// 1x2x3x...x n ? or show facterial

#include<stdio.h>

int main()
{
    int i,n,sum=1;
    printf("Enter any integer number : ");
    scanf("%d",&n);

    for( i=1; i<=n; i++)
    {
        sum = sum*i;
    }

    printf("Result is : %d",sum);

    getch();


}
