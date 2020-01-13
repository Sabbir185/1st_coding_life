
// Lucas series = 1 1 1 3 5 9 17....( 3 number adding system )

#include<stdio.h>
int main()
{
    int a,b,c,d,i,n;
    printf("Enter the value of Lucas number : ");
    scanf("%d",&n);
    a=1;
    b=1;
    c=1;
    printf("%d %d %d ",a,b,c);

    for(i=1; i<=n-3; i++)
    {
        d = a+b+c;
        printf("%d ",d);
        a = b;
        b = c;
        c = d;
    }

    return 0;
}
