
//conversion from uppercase letter to lowercase, using c library functon.

#include<stdio.h>
int main()
{
    char lower,upper; //declare any kind of two variable .
    printf("Enter the uppercase letter : ");
    scanf("%c",&upper);

    lower = tolower(upper); // tolower() is a library function.

    printf("The lowercase letter is :%c",lower);

    return 0;


}

