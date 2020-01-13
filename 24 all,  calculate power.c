#include<stdio.h>
int main()
{
    int x,y;
    double result;
    printf("Enter the base value : ");
    scanf("%d",&x);

    printf("Enter to the power value : ");
    scanf("%d",&y);

    result = pow(x,y); // pow() , using library function for x to the power y

    printf("The result is : %.2lf",result);

    getch();


}
