// swap change variable value

#include<stdio.h>

int main()
{
    int num1=10;
    int num2=5;

    num1=num1 - num2;
    num2=num1+num2;
    num1=num2-num1;

    printf("number1 is = %d\n",num1);
    printf("number2 is = %d",num2);

    getch();


}
