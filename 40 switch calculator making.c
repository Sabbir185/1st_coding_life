
//SABBIR AHMMED, CSE, Norther University,Khulna
#include<stdio.h>
int main()
{
    char operator;
    double num1,num2;
    printf("Enter an operator (+-*/) : \n");
    scanf("%c",&operator);
    printf("Enter two numbers : ");
    scanf("%lf %lf",&num1,&num2);

    switch(operator)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf",num1,num2,num1+num2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf",num1,num2,num1-num2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf",num1,num2,num1*num2);
        break;
    case '/':
        printf("%.2lf / %.2lf = %.2lf",num1,num2,num1/num2);
        break;
    default:
        printf("Error ! not an operator");

    }

    getch();

}
