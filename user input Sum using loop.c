
#include<stdio.h>

int main()
{
    int a[4],sum=0,i;
    printf("Enter any 4 numbers : ");

    for( i=0 ; i<4; i=i+1)
    {
        scanf("%d",&a[i] );
    }

    for( i=0; i<4; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is : %d",sum);

    return 0;
}
