#include<stdio.h>
int main()
{
    int count=0,n;
    printf("Enter any integer value : ");
    scanf("%d",&n);

    while(n!=0)
    {
        n = n/10;
        ++count;
    }
    printf("Total digit is : %d",count);

    return 0;
}
