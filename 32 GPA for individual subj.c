#include<stdio.h>
int main()
{
    float marks;
    printf("Enter the marks = ");
    scanf("%f",&marks);

    if(marks>=80)
        printf("A+\n");

    else if(marks>=70)
        printf("A\n");

    else if(marks>=60)
        printf("A-\n");

    else if(marks>=50)
        printf("B\n");

    else if(marks>=40)
        printf("C\n");

    else if(marks>=33)
        printf("D\n");

    else if(marks<=32)
        printf("fail");

    getch();

}
