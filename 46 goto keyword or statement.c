#include<stdio.h>
int main()
{
    int i;
    i=1;

    level:
        printf("%d\t",i); // t = tab mean display result just a position
        i++;

        if(i<10)
            goto level; // level is calling here

        getch();

}
