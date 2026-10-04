#include <stdio.h>
int main()
{
    float temp;
    scanf("%f", &temp);

    if (temp < 0)
        printf("Ice\n");
    else if (temp > 100)
        printf("Steam\n");
    else
        printf("Water\n");
    return 0;
}