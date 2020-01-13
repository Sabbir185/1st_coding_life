// SABBIR AHMMED, DEP.OF CSE, Northern University,Khulna
#include<stdio.h>
#include<math.h>
int main()
{
    int choise;
    float temp,cal;
    printf("Temperature conversion menu :\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choise : ");
    scanf("%d",&choise);

    switch(choise)
    {
    case 1 :
        {
            printf("Enter the Fahrenheit temperature :  ");
            scanf("%f",&temp);
            cal = (temp-32)/1.8;
            printf("The Celsius temperature is : %f",cal);
            break;
        }
    case 2 :
        {
            printf("Enter Celsius temperature : ");
            scanf("%f",&temp);
            cal=(1.8*temp)+32;
            printf("The Fahrenheit temperature is : %f",cal);
            break;
        }
    default:
        printf("Not a correct option");

    }


}

