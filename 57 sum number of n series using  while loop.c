// parallel series

#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter last number : ");
    scanf("%d",&n);

    printf("1+3+5+...+%d",n);

    while(i<=n)
    {
        sum = sum + i;
        i = i + 2 ; //for 2 difference among number this series ..OK..
    }

    printf(" = %d",sum);

    getch();
}
