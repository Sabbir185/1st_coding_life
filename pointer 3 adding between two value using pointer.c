
// pointer is a variable that store( print/point ) value or address of another variable .

#include<stdio.h>
int main()
{
    int x=15,y=25,sum;

    int *ptr1,*ptr2;

    ptr1 = &x;
    ptr2 = &y;

    sum = *ptr1 + *ptr2;  // sum = x + y ;

    printf("The sum is = %d",sum);


    getch();
}

