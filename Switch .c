#include<stdio.h>

int main()
{
    int n=5;

    switch(n)
    {
    case 2:
        printf("2");
        break;
    case 5:
        printf("5");

    case 10:
        printf("10");
        break;

    default:
        printf("Not found");
    }
}
