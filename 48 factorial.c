#include<stdio.h>
int main()
{
    int i,n,fact;
    fact=1;
    printf("Enter any positive number : ");
    scanf("%d",&n);

    for( i=1; i<=n; i++)
    {
        fact = fact*i;
    }

    printf("The factorial of %d is : %d\n",n,fact);

    printf("\nPowered by\n");

    printf("SABBIR AHMMED, DEPT.OF CSE, NUBTK");

    getch();
}
