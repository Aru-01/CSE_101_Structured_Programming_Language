#include <stdio.h>

int main()
{
    int n;
    printf("Tomi joto porjonto loop ta chalate chaw to number ta input a dao : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}