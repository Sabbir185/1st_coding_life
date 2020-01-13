#include<stdio.h>
int odd(int n);



int main()
{
    int i,n;
    scanf("%d",&n);
    odd(n);

    return 0;
}

int odd(int n)
{
    int i;

    for(i=1;i<=n;i=i+2)
    {
        printf("%d \n",i);
    }

    return 0;

}
