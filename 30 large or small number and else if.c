#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 1st number : ");
    scanf("%d",&num1);

    printf("Enter 2nd number : ");
    scanf("%d",&num2);

    if(num1 > num2)
        printf("Large : %d\n",num1);
    else if(num1 < num2)
        printf("Large : %d",num2);
    else
        printf(" Numbers are equal ");

    return 0;
}

// same for small number just change condition
