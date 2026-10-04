#include <stdio.h>

int main()
{
    int start, end;
    scanf("%d %d", &start, &end);

    if (start <= 1)
        start = 2;

    printf("All Prime Number of Range %d to %d\n", start, end);
    for (int i = start; i <= end; i++)
    {
        int prime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
            printf("%d ", i);
    }

    return 0;
}