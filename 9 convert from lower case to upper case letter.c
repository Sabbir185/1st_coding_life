
//we will use ASCII value to convert lower to upper case letter

#include<stdio.h>
int main()
{
    char lower;
    printf("Enter the lower case letter :");
    scanf("%c",&lower);

    printf("The Upper case lettet is : %c",lower-32);

    /*we know that if we minius 32 from lower case ASCII value
    so we will get upper case letter.Example, a=97 and A=65 so 97-65= 32 ...*/

    getch();


}
