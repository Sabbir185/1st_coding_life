                 //  1/1+1/2+1/3+1/4+....1/n  = ?

#include<stdio.h>
int main()
{
    double n,i,sum=0;
    printf("Enter value of n : ");
    scanf("%lf",&n);

    for( i=1; i<=n; i++)
    {
        sum = sum + (1/i);

        if(i==1)
            printf("\n1 + ");
        else if(i==n)
            printf("(1/%.1lf)",i);
        else
            printf("(1/%.1lf) + ",i);
    }

    printf("\nThe result is : %.2lf",sum);

    return 0;
}
