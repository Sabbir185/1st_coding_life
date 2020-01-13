#include<stdio.h>

int main()
{
    int a[5],sum=0,i;
    printf("Enter any 5 numbers : ");

    scanf( "%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4] );

    for( i=0; i<=4; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is : %d",sum);

    return 0;
}
