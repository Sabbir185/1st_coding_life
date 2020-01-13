
//conversion from lowercase letter to uppercase using c library functon.

#include<stdio.h>
int main()
{
    char lower,upper; //declare any kind of two variable .
    printf("Enter the lowercase letter : ");
    scanf("%c",&lower);

    upper = toupper(lower); // toupper() is a library function.

    printf("The uppercase letter is :%c",upper);

    return 0;


}
