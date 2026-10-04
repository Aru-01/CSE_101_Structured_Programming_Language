#include <stdio.h>

int main()
{
    int basic_salary;
    float house_rent;

    scanf("%d", &basic_salary);

    if (basic_salary >= 10000)
        house_rent = basic_salary * 0.45;
    else
        house_rent = basic_salary * 0.55;

    printf("House rent will be: %.2f", house_rent);

    return 0;
}