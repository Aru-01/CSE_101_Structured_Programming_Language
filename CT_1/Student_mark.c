#include <stdio.h>

int main()
{

    int total_mark, student_mark;
    scanf("%d %d", &total_mark, &student_mark);

    if (((float)total_mark * .6) <= student_mark)
        printf("He will get 1000 tk.");
    else
        printf("He will get 500 tk.");

    return 0;
}