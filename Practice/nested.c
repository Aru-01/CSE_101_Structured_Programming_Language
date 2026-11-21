// # print a square shape
// *****
// *****
// *****
// *****
// *****

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) // outer loop
    {
        for (int j = 0; j < n; j++) // inner loop
        {
            printf("*", j);
        }
        printf("\n");
    }

    return 0;
}