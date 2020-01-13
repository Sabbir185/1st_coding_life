
// 1.5+2.5+3.5+....+4.5 = ?

#include<stdio.h>
int main()
{
    float n,i,sum=0;
    printf("Enter the value of n : ");
    scanf("%f",&n);

    for( i=1.5; i<=n; i++)
    {
        printf("%.1f ",i);
        sum = sum + i;
    }

    printf("\nThe fraction addition series result : %.2f",sum);

    return 0;
}
