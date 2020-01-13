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
        sum=sum*10+rem;
        temp=temp/10;

    }
    if(num==sum)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    getch();
}
