#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter num of n : ");
    scanf("%f",&n);

    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("Average  %.2f",(sum/n));


    return 0;
}

