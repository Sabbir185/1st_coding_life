#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    if(num>0)
        printf("Possitive");
    else if(num<0)
        printf("Negetive");
    else
        printf("Zero");

    return 0;
}
