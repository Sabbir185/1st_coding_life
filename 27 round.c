#include<stdio.h>
int main()
{
    double x,sum;
    printf("Enter the fraction number : ");
    scanf("%lf",&x);
    sum = round(x);

    printf("The round figure number is %.2lf = %.2lf",x,sum);

    getch();

}
