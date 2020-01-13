#include<stdio.h>
int main()
{
    int number[]={10,15,20,30,40,25,50,60,70,45,80,90,100};

    int value,i,position;
    printf("Enter your desire value : ");
    scanf("%d",&value);

    position = -1;

    for( i=0; i<13; i=i+1 )
    {
        if( value==number[i])
        {
            position = i + 1 ; // i represent index position , but number[i] represent value of index .
            break;             // + 1 for human count .
        }
    }
    if( position == -1)
        {
            printf("Sorry,The number is invalid");
        }
    else
        printf("The position of number is %d",position);


    return 0;
}
