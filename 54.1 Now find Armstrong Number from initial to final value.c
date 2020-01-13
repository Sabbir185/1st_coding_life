#include<stdio.h>
int main()
{
    int initial,finalNum,i,sum=0,rem,temp;
    printf("Enter initial Number : ");
    scanf("%d",&initial);

    printf("Enter finalNum Number : ");
    scanf("%d",&finalNum);

    for(i=initial; i<=finalNum; i++)
    {
        temp = i;

        while( temp!=0)
        {
           rem = temp%10;
           sum = sum + rem*rem*rem ;
           temp = temp / 10 ;
        }

        if( sum == i )
        {
            printf("%d ",i);
        }

        sum = 0;

    }

    getch();

}
