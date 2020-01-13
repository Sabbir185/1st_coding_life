#include<stdio.h>

int main()
{
    double marks[5]={82.5,75,85,90,96.5};

    int roll;

    for(roll=1; roll<=5; roll++)
    {
        printf("Roll %d , marks %.2lf\n",roll,marks[roll-1]);
    }

    return 0;
}
