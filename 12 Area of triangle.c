//SABBIR AHMMED, CSE, NUBTK
//Write a c program and calculate triangle area
#include<stdio.h>
int main()
{
    float base,hight,Area;
    printf("Enter the Base =  ");
    scanf("%f",&base);

    printf("Enter the hight =  ");
    scanf("%f",&hight);

    Area = (float)1/2*base*hight; //1/2 integer so we have to declare float type so type casting,or use 0.5 instead of 1/2.

    printf("The Area is = %.2f",Area);

    return 0;


}
