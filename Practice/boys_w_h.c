// write a program that will take weight and height of n boys/girls as input and print the of boys with weight<50kgs and height<160cm;

#include <stdio.h>
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int w, h;
        printf("Please Enter %d id student data: ",i);
        scanf("%d %d", &w, &h);

        if (w < 50 && h < 160)
        {
            cnt++;
            printf("Match the condition of this student %d\n", i);
        }
    }

    printf("condition full fill student count: %d", cnt);
}
