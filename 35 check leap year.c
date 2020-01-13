
// SABBIR AHMMED,CSE, NUBTK
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year : ");
    scanf("%d",&year);

    if(year%400==0)
        printf("this is Leap year");
    else if(year%4==0 && year%100!=0)
        printf("This is leap year");

    else
        printf("This is not Leap year");

    return 0;

}
