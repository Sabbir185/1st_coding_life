#include<stdio.h>


int main()
{
    int i,max;
    int a[5] = {7,5,3,9,4};

    max = a[0];
    for( i=1; i<5; i=i+1)
    {
        if( max < a[i])
          {
             max = a[i];
          }
    }
     printf("Maximum number is : %d",max);

    return 0;
}

