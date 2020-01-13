#include<stdio.h>

int main()
{
    int x,result;
    printf("Enter any number : ");
    scanf("%d",&x);

    result = -x; // for unary +/- just replace +x or -x .

    printf("The unary minus is = %d",result);

    getch();

}
