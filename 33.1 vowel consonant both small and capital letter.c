#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter : ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='A' || ch=='e'||ch=='E' || ch=='i'||ch=='I' || ch=='o'||ch=='O' || ch=='u'||ch=='U')
        printf("This letter is Vowel");
    else
        printf("This is consonant");

    return 0;

}
