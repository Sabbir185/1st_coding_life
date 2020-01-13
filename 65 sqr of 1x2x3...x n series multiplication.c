// 1^2 X 2^2 X 3^2... X 4^2 = ?
#include<stdio.h>

int main()
{
    int i,n,sum=1; // for multiplication sum will not Zero , always 1 or more .
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+2)
    {
        sum = sum * i*i;
    }

    printf("Result is : %d",sum);

    getch();


}
