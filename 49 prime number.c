//SABBIR AHMMED, DEPT.OF CSE, NORTHERN UNIVERSITY,KHULNA

#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter any positive number : ");
    scanf("%d",&num);

    for( i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }

    if(count==0)
        printf("Prime number\n");
    else
        printf("It is not prime number");



    getch();
}
