#include<stdio.h>
int main()
{
    int num,temp,sum,rem;
    printf("Enter any positive number : ");
    scanf("%d",&num);

    sum=0;
    temp = num;

    while(temp!=0)
    {
       rem = temp % 10;
        sum = sum + rem ;
        temp = temp / 10 ;
    }
    printf("Sum of digit is : %d",sum);

    return 0;

}
