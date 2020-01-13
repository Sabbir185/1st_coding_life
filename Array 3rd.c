#include<stdio.h>

int main()
{
    int array[5];

    printf("Enter your value :\n");
    int i;

    for(i=1; i<=5; i++)
    {
        printf("Array number %d : ",i);
        scanf(" %d",&array[i-1]);
    }
    printf("\n");

    return 0;
}


// Array input method , my system...
