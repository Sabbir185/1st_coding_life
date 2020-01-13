#include<stdio.h>
int main()
{
    int num,temp,sum,i,rem,fact;
    printf("Enter an integer number : ");
    scanf("%d",&num);

    sum=0;
    temp=num;

    while(temp!=0)
    {
        rem = temp % 10 ;

        fact=1;
        for(i=1; i<=rem; i++)
        {
            fact = fact*i;
        }

        sum = sum + fact ;
        temp = temp / 10 ;
    }
    if( sum == num )
        printf("%d is a Strong Number",num);
    else
        printf("%d is not a Strong Number",num);

    getch();


}
