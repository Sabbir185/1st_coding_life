
// pointer is a variable that store( print/point ) value or address of another variable .

#include<stdio.h>
int main()
{
    int x=10,y=20,temp;

    int *ptr1,*ptr2;

    ptr1 = &x;
    ptr2 = &y;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\n Value of x = %d",x);
    printf("\n Value of y = %d",y);


    getch();

}

