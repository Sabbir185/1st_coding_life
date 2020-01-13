#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the series last number : ");
    scanf("%d",&n);
    printf("1+2+3+....+%d",n);
    for( i=1; i<=n; i=i+1) // i+1 because of series difference 1 .
    {
        sum = sum + i ;
    }
    printf(" = %d\n",sum);

    getch();
}

//1+2+3+4+5 = 15
//1+2+3+...+5 = 15
