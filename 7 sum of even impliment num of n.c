#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter number of n : ");
    scanf("%d",&n);

    printf("\nEven numbers are : ");

    for(i=2; i<=n; i=i+2)
    {
        printf("%d",i);
        sum=sum+i;
    }
    printf("\nSum of even : %d",sum);

    return 0;
}
