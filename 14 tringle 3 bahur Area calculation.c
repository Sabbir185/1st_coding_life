//write a c program and calculate the area of triangle 3 bahu
//Area = sqrt(s*(s-a)(s-b)(s-c))
// s= (a+b+c)/2

#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    printf("Enter the 3 values= ");
    scanf("%lf %lf %lf",&a,&b,&c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The Area of triangle = %.2lf",area);

    return 0;


}
