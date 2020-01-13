// scanf and printf clear ..

#include<stdio.h>

int main ()
{
    /*//rule 1
    int num1,num2;
    printf("Enter first number :\n");
    scanf("%d",&num1);

    printf("Enter second number :\n");
    scanf("%d",&num2);

    printf("Numbers are :%d %d",num1,num2);

    */

    /*//rule 2
    int num1,num2;
    printf("Enter first and second number : ");
    scanf("%d %d",&num1,&num2);

    printf("You have pressed : %d %d",num1,num2); */

    //rule 3

    /*int num1;
    float num2;
    printf("Enter an integer number : ");
    scanf("%d",&num1);

    printf("Enter the float numer : ");
    scanf("%f",&num2);

    printf("The integer and float numbers are : %d %.1f",num1,num2); */

    //rule 4

    int num1;
    float num2;
    printf("Enter an integer and float number : \n");
    scanf("%d %f",&num1,&num2);

    printf("The integer and float number is : %d %f",num1,num2);

    //we know that float fraction  always show 6 digit number.


    getch();
}
