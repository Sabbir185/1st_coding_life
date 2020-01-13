#include<stdio.h>
#include<math.h>
/*
1st way :

int main()
{
    double x;
    double result;
    printf("Enter the value = ");
    scanf("%lf",&x);

    result = sin(x);

    printf("The result of sinx is = %.2lf",result);

    return 0;

}
*/
//2nd way

int main()
{
    double x= .35;
    double result = sin(x);  //log()

    printf("sin(%lf) = %lf\n",x,result);

    return 0;


}

// just replace cos,tan instead of sin
