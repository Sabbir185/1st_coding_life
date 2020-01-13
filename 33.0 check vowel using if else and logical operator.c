#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a Letter : ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("Letter is Vowel");
    else
        printf("Letter is Consonant");

    return 0;
}
