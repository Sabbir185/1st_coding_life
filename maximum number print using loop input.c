#include<stdio.h>
/*
  MD.SABBIR AHMMED , DEPT.OF CSE , NORTHERN UNIVERSITY , KHULNA .
*/

int main()
{
    int a[5],i,max;
    printf("Enter 5 integer numbers : \n");

    for ( i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    max = a[0];

    for ( i=1; i<5; i++)
    {
        if( max < a[i])
        {
            max = a[i];
        }
    }
    printf("The max  number is : %d",max);

    return 0;
}
