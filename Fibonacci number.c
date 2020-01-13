#include<stdio.h>
// MD.SABBIR AHMMED , DEPT.OF CSE , NORTHERN UNIVERSITY KHULNA
int main()
{
    int a[50],n,i;
    printf("How many number you want to see in Fibonacci series ? \n");
    scanf("%d",&n);

    a[0] = 0;
    a[1] = 1;
    for( i=2; i<n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}

