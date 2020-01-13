#include<stdio.h>

int main()
{
    int num[5],sum=0,i;

    num[0]=10;
    num[1]=20;
    num[2]=30;
    num[3]=40;
    num[4]=50;

    for( i=0 ; i<=4; i=i+1 )
    {
        sum = sum + num[i];
    }
    printf("The result of sum is : %d",sum);
    printf("\nThe average is : %.2lf", (float)sum/5 );


    return 0;

}
