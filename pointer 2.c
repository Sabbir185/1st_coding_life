
// pointer is a variable that store( print/point ) value or address of another variable .

#include<stdio.h>
int main()
{
    int x = 10,y=20,z=30;

    int *ptr;

    ptr = &x;
    printf("Value X = %d",*ptr);
    printf("\nAddress of x = %d",ptr);

    ptr = &y;
    printf("\nValue of y = %d",*ptr);
    printf("\nAddress of y = %d",ptr);

    ptr = &z;
    printf("\nValue of z = %d",*ptr);
    printf("\nAddress of z = %d",ptr);


    printf("\nValue of pointer = %d",ptr); // here pointer value is address of z , compiler line by line compile ..
    printf("\nAddress of pointer = %d",&ptr);



    getch();
}
