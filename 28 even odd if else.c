// write a c program and display even or odd
#include<stdio.h>
int main()
{
    int num;
    printf(" Enter any number : ");
    scanf("%d",&num);

    if( num%2==0 )
    printf(" Even = %d\n",num);
    else
    printf(" Odd = %d\n",num);

    return 0;
}
