// fibonacci series = 0 1 1 2 3 5 8 13 ......

#include<stdio.h>
int main()
{
    int first=0,second=1,fibo,n,count=0;
    printf("Enter the fibonacci number : ");
    scanf("%d",&n);

    while(count<n)
    {
        if(count<=1)
            {
             fibo = count;
            }
        else
        {
          fibo = first + second;
          first = second;
          second = fibo;
        }

        printf(" %d ",fibo);
        count++;
    }

   printf("\n SABBIR AHMMED, CSE-NUBTK ");
    return 0;
}
