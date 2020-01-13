//sabbir ahmmed, cse, nubtk
//write a c program and calculate sum and avarage .
#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;
    printf("Enter 3 number = ");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum = num1+num2+num3;
    avg = (float)sum/3;

    printf("The sum is = %d\n",sum);
    printf("The avarage is = %.2f",avg);

    return 0;

}
