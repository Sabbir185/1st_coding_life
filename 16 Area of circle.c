// Area of circle = 3.1416*radius*radius
// it has varius ways to solve this problem

/*

#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter the radius = ");
    scanf("%f",&radius);

    area = 3.1416*radius*radius; //or we can use library function M_PI instead of variable declare or 3.1416 .

    printf("The Area of circle is = %.2f",area);

    return 0;

}

*/

#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area;
    printf("Enter the radius = ");
    scanf("%f",&radius);

    area = M_PI*radius*radius; //using library function for pi

     printf("The Area of circle is = %.2f",area);

    return 0;
}

