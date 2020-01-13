// 1+2+3+4+..+5 = ?
// 1+3+5+...+7 = ?
// 2+4+6+...+8 = ?


#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter value of n : ");
    scanf("%d",&n);

    for( i=1; i<=n; i=i+2 )
    {
        printf("%d ",i);
        sum = sum + i;
    }

    printf("\nThe result/add is : %d",sum);

    getch();
}
