#include<stdio.h>
int main()
{
    int x;
    double result;

    printf("Enter any integer value : ");
    scanf("%d",&x);

    result = sqrt(x);

    printf("The result of squrt root is : %.2lf",result);

    getch();



}
