
 //SABBIR AHMMED, CSE, NUBTK
// write a c program about sum and avarage
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    printf("The sum is : %d\n",sum);

    avg = (float)sum/2; // sum variable data type change & it is called Type casting
    printf("The avarage is : %.2f",avg);

    return 0;

}

