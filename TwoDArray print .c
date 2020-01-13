#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4] = { { 1,2,3,4},{5,6,7,8},{9,10,11,12} };

    for( i=0; i<3; i++)  // i is row . here is 3 row.
    {
        for(j=0;j<4; j++)  // j is col . here col number is 4 .
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
