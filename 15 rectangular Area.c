//write a c program and calculate the area of rectangular
#include<stdio.h>
int main()
{
    float length,width,Area;
    printf("Enter the length = ");
    scanf("%f",&length);

    printf("Enter the width = ");
    scanf("%f",&width);

    Area = length*width;

    printf("The Area of Rectangle is = %.2f",Area);

    return 0;
}
