
//SABBIR AHMMED, CSE, Northern University,Khulna

// write a program & show large number using conditional operator.

#include<stdio.h>
int main()
{
    int num1,num2,large;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    large = num1>num2 ? num1 : num2 ;

    printf("The large number is : %d",large);

    return 0;


}
