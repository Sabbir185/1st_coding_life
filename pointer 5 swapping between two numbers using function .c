#include<stdio.h>

void swapping( int *ptr1, int *ptr2)
{
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

int main()
{
   int x=10,y=20;
   printf("Before swapping = %d , %d",x,y);

   swapping( &x,&y);
   printf("\n\nAfter swapping = %d , %d",x,y);

   printf("\n\n");

   return 0;
}
