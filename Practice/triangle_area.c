// write a program to find the area of a circle the equation of the program is Area=pi*r*r

#include <stdio.h>
int main()
{

    float area, r;
    printf("please enter Value of r : ");
    scanf("%f", &r);

    area = 3.1416 * r * r;

    printf("Area : %.2f\n", area);
    return 0;
}