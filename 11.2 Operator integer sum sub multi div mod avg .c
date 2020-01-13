//SABBIR AHMMED, CSE, NUBTK
//write the c program and calculate sum,sub,multi,div,avg
#include<stdio.h>
int main()
{
    int num1,num2,result;
    float avg;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    result = num1+num2;
    printf("the sum is : %d\n",result);

     result = num1-num2;
    printf("the sub is : %d\n",result);

     result = num1*num2;
    printf("the multi is : %d\n",result);

    avg = ((float)num1*(float)num2)/2; // only multi avg and declare typecasting
    printf("The avarage of multi is : %.2f\n",avg);

     result = num1/num2;
    printf("the div is : %d\n",result);

     result = num1%num2;
    printf("the mod/reminder is : %d",result);

    return 0;


}
