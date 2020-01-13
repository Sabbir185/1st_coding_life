#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("This letter is Capital letter ");
    else if(ch>='a' && ch<='z')
        printf("This letter is small letter ");
    else
        printf("This is not a letter");

    return 0;


}
