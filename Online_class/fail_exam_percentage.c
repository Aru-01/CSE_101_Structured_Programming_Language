#include <stdio.h>
int main()
{
    int n, pass_mark, f = 0;
    scanf("%d %d", &n, &pass_mark);

    int st_mark[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &st_mark[i]);
        if (st_mark[i] < pass_mark)
            f++;
    }
    float fail = ((float)f / n) * 100;
    printf("Percantage of students fail to pass the exam - %.0f", fail);
    return 0;
}