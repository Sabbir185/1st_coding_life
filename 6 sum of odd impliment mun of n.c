#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter num of n : ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+2)
    {
        printf("%d",i); // first display all odd numbers
        sum=sum+i;      // calculate odd numbers
    }
    printf("\nSum of odd : %d",sum);  // print sum of odd numbers

    return 0;
}

