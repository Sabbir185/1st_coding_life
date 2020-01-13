#include<stdio.h>
int main()
{
    int x = 5 ;

    printf("Value of x : %d",x);
    printf("\nAddress of x : %d",&x); // for hexadecimal %x , only positive value %u .

    int y = 10 ;

    int *ptr;

    ptr = &y;

    printf("\nAddress of y : %d",&y);
    printf("\nValue of ptr : %d",ptr);

    printf("\nAddress of ptr : %d",&ptr);


    printf("\nvalue of y : %d",y);

    printf("\nvalue of y by pointer : %d",*ptr);

    return 0;
}
