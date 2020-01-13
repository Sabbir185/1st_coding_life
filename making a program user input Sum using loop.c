
#include<stdio.h>

int main()
{
    int a[100],sum=0,i,n;
    printf("How many numbers you want to calculate ? : \n");
    scanf("%d",&n);
    printf("Please enter your %d numbers \n",n);

    for( i=0 ; i<n; i=i+1)
    {
        scanf("%d",&a[i] );
    }

    for( i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is : %d",sum);

    return 0;
}

