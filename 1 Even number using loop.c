#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter num of n : ");
    scanf("%d",&n);

    for(i=2; i<=n; i=i+2)
    {
        printf("%d",i);
    }
    printf(" are Even",i);


    return 0;
}
