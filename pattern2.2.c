#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n : ");
    scanf("%d",&n);

    for( row=1; row<=n; row++)
    {
        for( col=1; col<=row; col++)
        {
            printf("%c ",col+96); // 65 = A..... and 97 = a...... ai vabe amra letter print korte parbo
        }
        printf("\n");
    }
    return 0;
}
