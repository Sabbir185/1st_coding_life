
#include<stdio.h>
int main()
{
    int temp,num,sum,rem;
    printf("Enter any number : ");
    scanf("%d",&num);

    sum=0;
    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum + rem*rem*rem; // for n^3 N.B = Don't apply Reverse , *10 ...
        temp=temp/10;

    }
    if(num == sum)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    getch();
}
