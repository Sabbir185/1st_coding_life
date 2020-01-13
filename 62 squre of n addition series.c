
// 1^2+2^2+...+3^2 = ?

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter value of n : ");
    scanf("%d",&n);

    for( i=1; i<=n; i++)
    {
        printf("%d ",i*i);
        sum = sum + i*i;
    }

    printf("\nThe addition result is : %d",sum);

    return 0;
}
