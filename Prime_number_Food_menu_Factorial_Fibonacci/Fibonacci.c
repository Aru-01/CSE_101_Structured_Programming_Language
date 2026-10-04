#include <stdio.h>
int main()
{
    int n, prev = 0, next = 1,temp;
    scanf("%d", &n);
    printf("First %d Fibonacci numbers:\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", prev);
        temp=prev;
        prev = next;
        next += temp;
    }
}