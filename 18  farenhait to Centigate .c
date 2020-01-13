//feranhait to centigrate
// c=(f-32)/1.8
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter Ferenhait value : ");
    scanf("%f",&f);

    c=(f-32)/1.8;

    printf("The Centigrad value is : %.2f",c);

    getch();


}

