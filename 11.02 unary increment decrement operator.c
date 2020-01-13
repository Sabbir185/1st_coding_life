/*
// postfix increment operator
#include<stdio.h>
int main()
{
    int x=10 ;
    int y=x++ ; // y=10 , x=11 ,at first x assign with y
    // then if x again meat x so 1 is added with x ..

    printf("x = %d\n",x);
    printf("y = %d\n",y);

    return 0;
}

// prefix increment operator
#include<stdio.h>
int main()
{
    int x = 10 ;
    int y = ++x ;  // x,y=11
    printf(" x = %d\n",x);
    printf(" y = %d",y);

    return 0;
}  */
#include<stdio.h>
int main()
{
    int x = 10 ;

    printf(" x1 = %d\n",x++); // x=10
    printf(" x2 = %d\n",x );  // x=11
    printf(" x3 = %d\n",++x); // x=12
    printf(" x4 = %d\n",x );  // x=12
    printf(" x5 = %d\n",x--); // x=12
    printf(" x6 = %d\n",--x); // x=11,10

    return 0;
}
