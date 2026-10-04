#include <stdio.h>
int main()
{
    float r, v;
    scanf("%f", &r);

    v = (4 * 3.1416 * r * r * r) / 3;

    printf("Volume of sphere = %.2f", v);

    return 0;
}