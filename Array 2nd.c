#include<stdio.h>

int main()
{
    double marks[]={20.44,23,19,25,22};

    int i;

    printf(" I want to print just array value\n");

    for(i=0;i<=4;i++)
    {
        printf(" %.2lf\n",marks[i]);
    }
}
